#pragma once

#include <QBluetoothAddress>
#include <QProcess>
#include "OpenautoLog.hpp"
#include "btservice/AndroidBluetoothServer.hpp"
#include "btservice/AndroidBluetoothService.hpp"
#include "openauto/Configuration/Configuration.hpp"

namespace openauto {
namespace btservice {

class btservice {
 public:
  btservice(openauto::configuration::IConfiguration::Pointer config);

 private:
  const uint16_t cServicePortNumber = 22;
  void connectToBluetooth(QBluetoothAddress addr, QBluetoothAddress controller);
  openauto::btservice::AndroidBluetoothService androidBluetoothService_;
  openauto::btservice::AndroidBluetoothServer androidBluetoothServer_;
  QProcess* btConnectProcess;
};

}  // namespace btservice
}  // namespace openauto
