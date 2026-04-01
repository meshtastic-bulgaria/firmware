#pragma once
#include "configuration.h"
#include <Arduino.h>
#if HAS_ETHERNET
bool initEthernet();
bool isEthernetAvailable();
#endif