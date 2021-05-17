var commonHeaders = xdc.loadCapsule("ti/drivers/sources_common.xs").commonHeaders;
var commonSources = xdc.loadCapsule("ti/drivers/sources_common.xs").commonSources;

var cc26x4SrcList = commonSources.concat([
    "./adc/ADCCC26XX.c",
    "ADCBuf.c",
    "./adcbuf/ADCBufCC26X2.c",
    "AESCBC.c",
    "./aescbc/AESCBCCC26XX.c",
    "AESCTR.c",
    "./aesctr/AESCTRCC26XX.c",
    "AESCTRDRBG.c",
    "./aesctrdrbg/AESCTRDRBGXX.c",
    "AESCCM.c",
    "./aesccm/AESCCMCC26XX.c",
    "AESGCM.c",
    "./aesgcm/AESGCMCC26XX.c",
    "AESECB.c",
    "./aesecb/AESECBCC26XX.c",
    "./cryptoutils/cryptokey/CryptoKeyPlaintextCC26XX.c",
    "./cryptoutils/ecc/ECCParamsCC26X2.c",
    "./cryptoutils/sharedresources/CryptoResourceCC26XX.c",
    "./cryptoutils/utils/CryptoUtils.c",
    "./cryptoutils/sharedresources/PKAResourceCC26XX.c",
    "DAC.c",
    "./dac/DACCC26X2.c",
    "./dma/UDMACC26XX.c",
    "ECDH.c",
    "./ecdh/ECDHCC26X2.c",
    "ECDSA.c",
    "./ecdsa/ECDSACC26X2.c",
    "ECJPAKE.c",
    "./ecjpake/ECJPAKECC26X2.c",
    "EDDSA.c",
    "./eddsa/EDDSACC26X2.c",
    "./gpio/GPIOCC26XX.c",
    "./i2c/I2CCC26XX.c",
    "I2S.c",
    "./i2s/I2SCC26XX.c",
    "ITM.c",
    "./itm/ITMCC26XX.c",
    "./nvs/NVSCC26XX.c",
    "./pdm/Codec1.c",
    "./pdm/PDMCC26XX.c",
    "./pdm/PDMCC26XX_util.c",
    "./pin/PINCC26XX.c",
    "./power/PowerCC26X2.c",
    "./power/PowerCC26X2_calibrateRCOSC.c",
    "./pwm/PWMTimerCC26XX.c",
    "SHA2.c",
    "./sha2/SHA2CC26X2.c",
    //"./spi/SPICC26XXDMA.c",
    //"./spi/SPICC26X2DMA.c",
    "Temperature.c",
    "./temperature/TemperatureCC26X2.c",
    "./timer/TimerCC26XX.c",
    "TRNG.c",
    "./trng/TRNGCC26XX.c",
    "./timer/GPTimerCC26XX.c",
    "./uart2/UART2CC26X2.c",
    "./uart/UARTCC26XX.c",
    "./uart/UARTCC26X2.c",
    "./watchdog/WatchdogCC26XX.c",

    /* these .asm files gets pruned per target by libBuilder() function */
    "pdm/pdm2pcm_cc26x2_ccs.asm",
    "pdm/pdm2pcm_cc26x2_gnu.asm",
    "pdm/pdm2pcm_cc26x2_iar.asm"
]);

var cc26x4HdrList = commonHeaders.concat([
    "./adc/ADCCC26XX.h",
    "ADCBuf.h",
    "./adcbuf/ADCBufCC26X2.h",
    "AESCBC.h",
    "./aescbc/AESCBCCC26XX.h",
    "AESCTR.h",
    "./aesctr/AESCTRCC26XX.h",
    "AESCTRDRBG.h",
    "./aesctrdrbg/AESCTRDRBGXX.h",
    "AESCCM.h",
    "./aesccm/AESCCMCC26XX.h",
    "AESGCM.h",
    "./aesgcm/AESGCMCC26XX.h",
    "AESECB.h",
    "./aesecb/AESECBCC26XX.h",
    "./cryptoutils/cryptokey/CryptoKey.h",
    "./cryptoutils/cryptokey/CryptoKeyPlaintext.h",
    "./cryptoutils/ecc/ECCParams.h",
    "./cryptoutils/sharedresources/CryptoResourceCC26XX.h",
    "./cryptoutils/sharedresources/PKAResourceCC26XX.h",
    "./cryptoutils/utils/CryptoUtils.h",
    "DAC.h",
    "./dac/DACCC26X2.h",
    "./dma/UDMACC26XX.h",
    "ECDH.h",
    "./ecdh/ECDHCC26X2.h",
    "ECDSA.h",
    "./ecdsa/ECDSACC26X2.h",
    "ECJPAKE.h",
    "./ecjpake/ECJPAKECC26X2.h",
    "EDDSA.h",
    "./eddsa/EDDSACC26X2.h",
    "./gpio/GPIOCC26XX.h",
    "./i2c/I2CCC26XX.h",
    "I2S.h",
    "./i2s/I2SCC26XX.h",
    "./nvs/NVSCC26XX.h",
    "./pdm/Codec1.h",
    "./pdm/PDMCC26XX.h",
    "./pdm/PDMCC26XX_util.h",
    "ITM.h",
    "./itm/ITMCC26XX.h",
    "PIN.h",
    "./pin/PINCC26XX.h",
    "./power/PowerCC26XX.h",
    "./power/PowerCC26X2.h",
    "./pwm/PWMTimerCC26XX.h",
    "SHA2.h",
    "./sha2/SHA2CC26X2.h",
    "./spi/SPICC26XXDMA.h",
    "./spi/SPICC26X2DMA.h",
    "Temperature.h",
    "./temperature/TemperatureCC26X2.h",
    "./timer/TimerCC26XX.h",
    "TRNG.h",
    "./trng/TRNGCC26XX.h",
    "./timer/GPTimerCC26XX.h",
    "./uart2/UART2CC26X2.h",
    "./uart/UARTCC26XX.h",
    "./uart/UARTCC26X2.h",
    "./watchdog/WatchdogCC26XX.h"
]);

var cc26x4SecureFlashInterfaceList = [
    "./nvs/flash/FlashCC26X4_ns.c",
    "./nvs/flash/FlashCC26X4_ns.h",
    "./nvs/flash/FlashCC26X4_s.c",
    "./nvs/flash/FlashCC26X4_s.h"
];
