#include <fuel_sensor_libuavcan.h>

/*uint32_t usedBlocks = 0;
uint32_t freeBlocks = 0;
uint32_t peakUsedBlocks = 0;*/

acu_libuavcan::acu_libuavcan(void)
{ 
	restart_request_handler.system_reset_flag = false;
	
	sw_version.major = SW_VERSION_MAJOR;
	sw_version.minor = SW_VERSION_MINOR;
	hw_version.major = HW_VERSION_MAJOR;
	hw_version.minor = HW_VERSION_MINOR;
}

void acu_libuavcan::can_init(void)
{
		GPIO_InitTypeDef GPIO_InitStruct;
	
		__GPIOA_CLK_ENABLE();
	
		GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_11;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF9_CAN;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void acu_libuavcan::acu_libuavcan_Init(int uavcanNodeID)
{
		node_ = &getNode();
    node_->setNodeID(uavcanNodeID);
		node_->setName(UAVCAN_NODE_NAME);
		node_->setSoftwareVersion(sw_version);
		node_->setHardwareVersion(hw_version);
		node_->start();
			
		static uavcan::GlobalTimeSyncSlave time_sync_slave_can(*node_);
		time_sync_slave_can_=&time_sync_slave_can;
		time_sync_slave_can_->start();
		
		uavcan_stm32::clock::adjustUtc(uavcan::UtcDuration::fromUSec(xTaskGetTickCount()));
		
		node_->setRestartRequestHandler(&restart_request_handler);
}


bool acu_libuavcan::get_system_reset_flag(void)
{
	return restart_request_handler.system_reset_flag;
}

void acu_libuavcan::start(void)
{
	node_->setModeOperational();
}

void acu_libuavcan::spinOnce(void)
{
	node_->spinOnce();
}

void acu_libuavcan::spin(uint32_t msec)
{
	/*usedBlocks = node_->getAllocator().getNumUsedBlocks();
  freeBlocks = node_->getAllocator().getNumFreeBlocks();
  peakUsedBlocks = node_->getAllocator().getPeakNumUsedBlocks();*/

	node_->spin(uavcan::MonotonicDuration::fromMSec(msec));
}

void acu_libuavcan::setModeSoftwareUpdate()
{
	node_->setModeSoftwareUpdate();
}

static Node& getNode()
{
    static Node node(getCanDriver(), getSystemClock());
    return node;
}
