SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR ?= $(abspath ../../../../../..)

include $(SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR)/imports.mak

CC = "$(TICLANG_ARMCOMPILER)/bin/tiarmclang"
AR = "$(TICLANG_ARMCOMPILER)/bin/tiarmar"

OBJECTS = examples_platforms_utils_debug_uart.obj examples_platforms_utils_mac_frame.obj

NAME = libopenthread_platform_utils_mtd

CFLAGS = -I../.. \
    -Oz \
    -g \
    -gdwarf-3 \
    -gstrict-dwarf \
    -Wall \
    -Wno-ti-macros \
    -ffunction-sections \
    -Wextra \
    -Wshadow \
    -Werror \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/examples/platforms \
    -DHAVE_CONFIG_H -D_BSD_SOURCE=1 -D_DEFAULT_SOURCE=1 \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/third_party/mbedtls \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/third_party/mbedtls/repo/include \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/include \
    -DMBEDTLS_CONFIG_FILE='"mbedtls-config-cc1352-ticlang.h"' \
    -I${WorkspaceDirPath}/libmbedcrypto_CC1352P_2_LAUNCHXL_tirtos_ticlang/config \
    -DOPENTHREAD_MTD=1 \
    -DOPENTHREAD_PROJECT_CORE_CONFIG_FILE='"openthread-core-cc1352-config-ide.h"' \
    -DOPENTHREAD_CONFIG_FILE='"openthread-config-cc1352-ticlang-mtd.h"' \
    -I${WorkspaceDirPath}/libopenthread_mtd_CC1352P_2_LAUNCHXL_tirtos_ticlang/config \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/src/core \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/src \
    -mcpu=cortex-m4 \
    -march=armv7e-m \
    -mthumb \
    -mfloat-abi=hard \
    -mfpu=fpv4-sp-d16

CPPFLAGS = -I../.. \
    -Oz \
    -g \
    -gdwarf-3 \
    -gstrict-dwarf \
    -Wall \
    -Wno-ti-macros \
    -ffunction-sections \
    -Wextra \
    -Wshadow \
    -Werror \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/examples/platforms \
    -DHAVE_CONFIG_H -D_BSD_SOURCE=1 -D_DEFAULT_SOURCE=1 \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/third_party/mbedtls \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/third_party/mbedtls/repo/include \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/include \
    -DMBEDTLS_CONFIG_FILE='"mbedtls-config-cc1352-ticlang.h"' \
    -I${WorkspaceDirPath}/libmbedcrypto_CC1352P_2_LAUNCHXL_tirtos_ticlang/config \
    -DOPENTHREAD_MTD=1 \
    -DOPENTHREAD_PROJECT_CORE_CONFIG_FILE='"openthread-core-cc1352-config-ide.h"' \
    -DOPENTHREAD_CONFIG_FILE='"openthread-config-cc1352-ticlang-mtd.h"' \
    -I${WorkspaceDirPath}/libopenthread_mtd_CC1352P_2_LAUNCHXL_tirtos_ticlang/config \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/src/core \
    -I${COM_TI_SIMPLELINK_CC13X2_26X2_SDK_INSTALL_DIR}/source/third_party/openthread/src \
    -mcpu=cortex-m4 \
    -march=armv7e-m \
    -mthumb \
    -mfloat-abi=hard \
    -mfpu=fpv4-sp-d16


all: $(NAME).a

examples_platforms_utils_debug_uart.obj: OPENTHREAD_MAKE_PATH/examples/platforms/utils/debug_uart.c
	@ echo Building $@
	@ $(CC) $(CFLAGS) -c $< -o $@

examples_platforms_utils_mac_frame.obj: OPENTHREAD_MAKE_PATH/examples/platforms/utils/mac_frame.cpp
	@ echo Building $@
	@ $(CC) $(CPPFLAGS) -c $< -o $@

$(NAME).a: $(OBJECTS)
	@ echo creating library $@
	@ $(AR) r $@ $^

clean:
	@ echo Cleaning...
	@ $(RM) $(OBJECTS) > $(DEVNULL) 2>&1
	@ $(RM) $(NAME).a > $(DEVNULL) 2>&1
