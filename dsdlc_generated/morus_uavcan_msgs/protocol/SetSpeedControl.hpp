/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\Marko\Documents\Development\morus_fuel_sensor\morus_uavcan_msgs\protocol\12.SetSpeedControl.uavcan
 */

#ifndef MORUS_UAVCAN_MSGS_PROTOCOL_SETSPEEDCONTROL_HPP_INCLUDED
#define MORUS_UAVCAN_MSGS_PROTOCOL_SETSPEEDCONTROL_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Service for enabling or disabling speed controller
#

#
# Speed controller defines
#
uint8 ON = 1
uint8 OFF = 0

uint8 speed_control		# 1-on, 0-off
---
bool ok
******************************************************************************/

/********************* DSDL signature source definition ***********************
morus_uavcan_msgs.protocol.SetSpeedControl
saturated uint8 speed_control
---
saturated bool ok
******************************************************************************/

#undef speed_control
#undef ON
#undef OFF
#undef ok

namespace morus_uavcan_msgs
{
namespace protocol
{

struct UAVCAN_EXPORT SetSpeedControl_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ON;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OFF;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > speed_control;
        };

        enum
        {
            MinBitLen
                = FieldTypes::speed_control::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::speed_control::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::ON >::Type ON; // 1
        static const typename ::uavcan::StorageType< typename ConstantTypes::OFF >::Type OFF; // 0

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::speed_control >::Type speed_control;

        Request_()
            : speed_control()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<8 == MaxBitLen>::check();
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

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ok;
        };

        enum
        {
            MinBitLen
                = FieldTypes::ok::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::ok::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::ok >::Type ok;

        Response_()
            : ok()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<1 == MaxBitLen>::check();
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

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 12 };

    static const char* getDataTypeFullName()
    {
        return "morus_uavcan_msgs.protocol.SetSpeedControl";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    SetSpeedControl_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool SetSpeedControl_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        speed_control == rhs.speed_control;
}

template <int _tmpl>
bool SetSpeedControl_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(speed_control, rhs.speed_control);
}

template <int _tmpl>
int SetSpeedControl_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::speed_control::encode(self.speed_control, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetSpeedControl_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::speed_control::decode(self.speed_control, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool SetSpeedControl_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        ok == rhs.ok;
}

template <int _tmpl>
bool SetSpeedControl_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(ok, rhs.ok);
}

template <int _tmpl>
int SetSpeedControl_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::ok::encode(self.ok, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetSpeedControl_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::ok::decode(self.ok, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature SetSpeedControl_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x24B0E45673BF7C06ULL);

    Request::FieldTypes::speed_control::extendDataTypeSignature(signature);

    Response::FieldTypes::ok::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetSpeedControl_::Request_<_tmpl>::ConstantTypes::ON >::Type
    SetSpeedControl_::Request_<_tmpl>::ON = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename SetSpeedControl_::Request_<_tmpl>::ConstantTypes::OFF >::Type
    SetSpeedControl_::Request_<_tmpl>::OFF = 0U; // 0

/*
 * Final typedef
 */
typedef SetSpeedControl_ SetSpeedControl;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::morus_uavcan_msgs::protocol::SetSpeedControl > _uavcan_gdtr_registrator_SetSpeedControl;

}

} // Namespace protocol
} // Namespace morus_uavcan_msgs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::protocol::SetSpeedControl::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Request >::stream(Stream& s, ::morus_uavcan_msgs::protocol::SetSpeedControl::Request::ParameterType obj, const int level)
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
    s << "speed_control: ";
    YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Request::FieldTypes::speed_control >::stream(s, obj.speed_control, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::protocol::SetSpeedControl::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Response >::stream(Stream& s, ::morus_uavcan_msgs::protocol::SetSpeedControl::Response::ParameterType obj, const int level)
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
    s << "ok: ";
    YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Response::FieldTypes::ok >::stream(s, obj.ok, level + 1);
}

}

namespace morus_uavcan_msgs
{
namespace protocol
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::protocol::SetSpeedControl::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::protocol::SetSpeedControl::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::protocol::SetSpeedControl::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace protocol
} // Namespace morus_uavcan_msgs

#endif // MORUS_UAVCAN_MSGS_PROTOCOL_SETSPEEDCONTROL_HPP_INCLUDED