# Add set(CONFIG_USE_middleware_fatfs_template_sd true) in config.cmake to use this component

include_guard(GLOBAL)
message("${CMAKE_CURRENT_LIST_FILE} component is included.")

if(CONFIG_USE_middleware_fatfs_sd)

add_config_file(${CMAKE_CURRENT_LIST_DIR}/ffconf.h ${CMAKE_CURRENT_LIST_DIR}/template/sd middleware_fatfs_template_sd)

else()

message(SEND_ERROR "middleware_fatfs_template_sd dependency does not meet, please check ${CMAKE_CURRENT_LIST_FILE}.")

endif()
