/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\Marko\Documents\Development\morus_fuel_sensor\morus_uavcan_msgs\control\attitude_control\2040.Status.uavcan
 */

#ifndef MORUS_UAVCAN_MSGS_CONTROL_ATTITUDE_CONTROL_STATUS_HPP_INCLUDED
#define MORUS_UAVCAN_MSGS_CONTROL_ATTITUDE_CONTROL_STATUS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <morus_uavcan_msgs\control\PidStatus.hpp>
#include <uavcan\Timestamp.hpp>

/******************************* Source text **********************************
#
# Add comment.
#

uavcan.Timestamp timestamp

morus_uavcan_msgs.control.PidStatus roll
morus_uavcan_msgs.control.PidStatus roll_rate
morus_uavcan_msgs.control.PidStatus pitch
morus_uavcan_msgs.control.PidStatus pitch_rate
#morus_uavcan_msgs.control.PidStatus yaw
#morus_uavcan_msgs.control.PidStatus yaw_rate
******************************************************************************/

/********************* DSDL signature source definition ***********************
morus_uavcan_msgs.control.attitude_control.Status
uavcan.Timestamp timestamp
morus_uavcan_msgs.control.PidStatus roll
morus_uavcan_msgs.control.PidStatus roll_rate
morus_uavcan_msgs.control.PidStatus pitch
morus_uavcan_msgs.control.PidStatus pitch_rate
******************************************************************************/

#undef timestamp
#undef roll
#undef roll_rate
#undef pitch
#undef pitch_rate

namespace morus_uavcan_msgs
{
namespace control
{
namespace attitude_control
{

template <int _tmpl>
struct UAVCAN_EXPORT Status_
{
    typedef const Status_<_tmpl>& ParameterType;
    typedef Status_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::Timestamp timestamp;
        typedef ::morus_uavcan_msgs::control::PidStatus roll;
        typedef ::morus_uavcan_msgs::control::PidStatus roll_rate;
        typedef ::morus_uavcan_msgs::control::PidStatus pitch;
        typedef ::morus_uavcan_msgs::control::PidStatus pitch_rate;
    };

    enum
    {
        MinBitLen
            = FieldTypes::timestamp::MinBitLen
            + FieldTypes::roll::MinBitLen
            + FieldTypes::roll_rate::MinBitLen
            + FieldTypes::pitch::MinBitLen
            + FieldTypes::pitch_rate::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::timestamp::MaxBitLen
            + FieldTypes::roll::MaxBitLen
            + FieldTypes::roll_rate::MaxBitLen
            + FieldTypes::pitch::MaxBitLen
            + FieldTypes::pitch_rate::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::timestamp >::Type timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::roll >::Type roll;
    typename ::uavcan::StorageType< typename FieldTypes::roll_rate >::Type roll_rate;
    typename ::uavcan::StorageType< typename FieldTypes::pitch >::Type pitch;
    typename ::uavcan::StorageType< typename FieldTypes::pitch_rate >::Type pitch_rate;

    Status_()
        : timestamp()
        , roll()
        , roll_rate()
        , pitch()
        , pitch_rate()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<440 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 2040 };

    static const char* getDataTypeFullName()
    {
        return "morus_uavcan_msgs.control.attitude_control.Status";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Status_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        timestamp == rhs.timestamp &&
        roll == rhs.roll &&
        roll_rate == rhs.roll_rate &&
        pitch == rhs.pitch &&
        pitch_rate == rhs.pitch_rate;
}

template <int _tmpl>
bool Status_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(timestamp, rhs.timestamp) &&
        ::uavcan::areClose(roll, rhs.roll) &&
        ::uavcan::areClose(roll_rate, rhs.roll_rate) &&
        ::uavcan::areClose(pitch, rhs.pitch) &&
        ::uavcan::areClose(pitch_rate, rhs.pitch_rate);
}

template <int _tmpl>
int Status_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::encode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::roll::encode(self.roll, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::roll_rate::encode(self.roll_rate, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pitch::encode(self.pitch, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pitch_rate::encode(self.pitch_rate, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Status_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::decode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::roll::decode(self.roll, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::roll_rate::decode(self.roll_rate, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pitch::decode(self.pitch, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::pitch_rate::decode(self.pitch_rate, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Status_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x5F8C9B0F3EEC99DAULL);

    FieldTypes::timestamp::extendDataTypeSignature(signature);
    FieldTypes::roll::extendDataTypeSignature(signature);
    FieldTypes::roll_rate::extendDataTypeSignature(signature);
    FieldTypes::pitch::extendDataTypeSignature(signature);
    FieldTypes::pitch_rate::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Status_<0> Status;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::morus_uavcan_msgs::control::attitude_control::Status > _uavcan_gdtr_registrator_Status;

}

} // Namespace attitude_control
} // Namespace control
} // Namespace morus_uavcan_msgs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::control::attitude_control::Status::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status >::stream(Stream& s, ::morus_uavcan_msgs::control::attitude_control::Status::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "timestamp: ";
    YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status::FieldTypes::timestamp >::stream(s, obj.timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "roll: ";
    YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status::FieldTypes::roll >::stream(s, obj.roll, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "roll_rate: ";
    YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status::FieldTypes::roll_rate >::stream(s, obj.roll_rate, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "pitch: ";
    YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status::FieldTypes::pitch >::stream(s, obj.pitch, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "pitch_rate: ";
    YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status::FieldTypes::pitch_rate >::stream(s, obj.pitch_rate, level + 1);
}

}

namespace morus_uavcan_msgs
{
namespace control
{
namespace attitude_control
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::control::attitude_control::Status::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::control::attitude_control::Status >::stream(s, obj, 0);
    return s;
}

} // Namespace attitude_control
} // Namespace control
} // Namespace morus_uavcan_msgs

#endif // MORUS_UAVCAN_MSGS_CONTROL_ATTITUDE_CONTROL_STATUS_HPP_INCLUDED