/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\Marko\Documents\Development\morus_fuel_sensor\morus_uavcan_msgs\actuator\gas_motor\2015.ChokeReference.uavcan
 */

#ifndef MORUS_UAVCAN_MSGS_ACTUATOR_GAS_MOTOR_CHOKEREFERENCE_HPP_INCLUDED
#define MORUS_UAVCAN_MSGS_ACTUATOR_GAS_MOTOR_CHOKEREFERENCE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Message for controlling choke of a gass motor
#

#
# Motor ID defines
#
uint8 FRONT = 1
uint8 RIGHT = 2
uint8 BACK = 3
uint8 LEFT = 4
uint8 ALL = 0

#
# Choke position defines
#
uint8 CLOSE = 0
uint8 OPEN = 1

uint8 motor_id	# id of the gass motor 1-front, 2-right, 3-back, 4-left, 0 - all motors
uint8 choke		# 1 - choke open, 0 - choke close
******************************************************************************/

/********************* DSDL signature source definition ***********************
morus_uavcan_msgs.actuator.gas_motor.ChokeReference
saturated uint8 motor_id
saturated uint8 choke
******************************************************************************/

#undef motor_id
#undef choke
#undef FRONT
#undef RIGHT
#undef BACK
#undef LEFT
#undef ALL
#undef CLOSE
#undef OPEN

namespace morus_uavcan_msgs
{
namespace actuator
{
namespace gas_motor
{

template <int _tmpl>
struct UAVCAN_EXPORT ChokeReference_
{
    typedef const ChokeReference_<_tmpl>& ParameterType;
    typedef ChokeReference_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FRONT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > RIGHT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BACK;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > LEFT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ALL;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > CLOSE;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OPEN;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > motor_id;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > choke;
    };

    enum
    {
        MinBitLen
            = FieldTypes::motor_id::MinBitLen
            + FieldTypes::choke::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::motor_id::MaxBitLen
            + FieldTypes::choke::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::FRONT >::Type FRONT; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::RIGHT >::Type RIGHT; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::BACK >::Type BACK; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::LEFT >::Type LEFT; // 4
    static const typename ::uavcan::StorageType< typename ConstantTypes::ALL >::Type ALL; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::CLOSE >::Type CLOSE; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::OPEN >::Type OPEN; // 1

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::motor_id >::Type motor_id;
    typename ::uavcan::StorageType< typename FieldTypes::choke >::Type choke;

    ChokeReference_()
        : motor_id()
        , choke()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<16 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 2015 };

    static const char* getDataTypeFullName()
    {
        return "morus_uavcan_msgs.actuator.gas_motor.ChokeReference";
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
bool ChokeReference_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        motor_id == rhs.motor_id &&
        choke == rhs.choke;
}

template <int _tmpl>
bool ChokeReference_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(motor_id, rhs.motor_id) &&
        ::uavcan::areClose(choke, rhs.choke);
}

template <int _tmpl>
int ChokeReference_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::motor_id::encode(self.motor_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke::encode(self.choke, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ChokeReference_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::motor_id::decode(self.motor_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke::decode(self.choke, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature ChokeReference_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xCD2E4E04D9E5BC89ULL);

    FieldTypes::motor_id::extendDataTypeSignature(signature);
    FieldTypes::choke::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::FRONT >::Type
    ChokeReference_<_tmpl>::FRONT = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::RIGHT >::Type
    ChokeReference_<_tmpl>::RIGHT = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::BACK >::Type
    ChokeReference_<_tmpl>::BACK = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::LEFT >::Type
    ChokeReference_<_tmpl>::LEFT = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::ALL >::Type
    ChokeReference_<_tmpl>::ALL = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::CLOSE >::Type
    ChokeReference_<_tmpl>::CLOSE = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename ChokeReference_<_tmpl>::ConstantTypes::OPEN >::Type
    ChokeReference_<_tmpl>::OPEN = 1U; // 1

/*
 * Final typedef
 */
typedef ChokeReference_<0> ChokeReference;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference > _uavcan_gdtr_registrator_ChokeReference;

}

} // Namespace gas_motor
} // Namespace actuator
} // Namespace morus_uavcan_msgs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference >::stream(Stream& s, ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference::ParameterType obj, const int level)
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
    s << "motor_id: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference::FieldTypes::motor_id >::stream(s, obj.motor_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "choke: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference::FieldTypes::choke >::stream(s, obj.choke, level + 1);
}

}

namespace morus_uavcan_msgs
{
namespace actuator
{
namespace gas_motor
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::ChokeReference >::stream(s, obj, 0);
    return s;
}

} // Namespace gas_motor
} // Namespace actuator
} // Namespace morus_uavcan_msgs

#endif // MORUS_UAVCAN_MSGS_ACTUATOR_GAS_MOTOR_CHOKEREFERENCE_HPP_INCLUDED