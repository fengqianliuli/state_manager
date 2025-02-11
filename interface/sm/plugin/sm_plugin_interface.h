
#pragma once

#include "class_loader/class_loader_register_macro.h"

class SmPluginInterface {
 public:
  virtual ~SmPluginInterface() {}
  /**
   * @brief start running plugin
   * Do not do time-consuming operations, return as soon as possible
   */
  virtual void Run() = 0;
};

#define SM_PLUGIN_MANAGER_REGISTER_PLUGIN(name, base) \
  CLASS_LOADER_REGISTER_CLASS(name, base)

