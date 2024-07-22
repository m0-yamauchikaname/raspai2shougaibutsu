// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  raspai2shougaibutsu.cpp
 * @brief roboto controller
 *
 */
// </rtc-template>

#include "raspai2shougaibutsu.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const raspai2shougaibutsu_spec[] =
#else
static const char* raspai2shougaibutsu_spec[] =
#endif
  {
    "implementation_id", "raspai2shougaibutsu",
    "type_name",         "raspai2shougaibutsu",
    "description",       "roboto controller",
    "version",           "1.0.0",
    "vendor",            "AIST",
    "category",          "Controller",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
raspai2shougaibutsu::raspai2shougaibutsu(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_inIn("in", m_in),
    m_sensorIn("sensor", m_sensor),
    m_outOut("out", m_out),
    m_endOut("end", m_end)
    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
raspai2shougaibutsu::~raspai2shougaibutsu()
{
}



RTC::ReturnCode_t raspai2shougaibutsu::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("in", m_inIn);
  addInPort("sensor", m_sensorIn);
  
  // Set OutPort buffer
  addOutPort("out", m_outOut);
  addOutPort("end", m_endOut);

  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>

  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t raspai2shougaibutsu::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t raspai2shougaibutsu::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t raspai2shougaibutsu::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t raspai2shougaibutsu::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t raspai2shougaibutsu::onDeactivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t raspai2shougaibutsu::onExecute(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t raspai2shougaibutsu::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t raspai2shougaibutsu::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t raspai2shougaibutsu::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t raspai2shougaibutsu::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t raspai2shougaibutsu::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}



extern "C"
{
 
  void raspai2shougaibutsuInit(RTC::Manager* manager)
  {
    coil::Properties profile(raspai2shougaibutsu_spec);
    manager->registerFactory(profile,
                             RTC::Create<raspai2shougaibutsu>,
                             RTC::Delete<raspai2shougaibutsu>);
  }
  
}
