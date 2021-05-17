/******************************************************************************
*  Filename:       rf_patch_cpe_multi_protocol_rtls.c
*
*  Description: RF core patch for multi-protocol support (all available API command sets) with RTLS components in CC13x2 and CC26x2
*
*  Copyright (c) 2015-2021, Texas Instruments Incorporated
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
*  3) Neither the name of the ORGANIZATION nor the names of its contributors may
*     be used to endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/
//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <string.h>

#include "rf_patch_cpe_multi_protocol_rtls.h"

#ifndef CPE_PATCH_TYPE
#define CPE_PATCH_TYPE static const uint32_t
#endif

#ifndef SYS_PATCH_TYPE
#define SYS_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC static
#endif

#ifndef _APPLY_PATCH_TAB
#define _APPLY_PATCH_TAB
#endif


CPE_PATCH_TYPE patchImageMultiProtocolRtls[] = {
   0x210040a5,
   0x21005141,
   0x210047fb,
   0x210040c1,
   0x21005201,
   0x210052e9,
   0x210055b1,
   0x210040f9,
   0x21004163,
   0x21004125,
   0x21005621,
   0x2100565d,
   0x21004195,
   0x210041a1,
   0x210041ad,
   0x210041c9,
   0x21005707,
   0x21004211,
   0x21004229,
   0x21004241,
   0x2100577b,
   0x21004265,
   0xd00507db,
   0xf803f000,
   0x70084902,
   0xb570bd70,
   0x47284d01,
   0x210004e0,
   0x0002241d,
   0x68084908,
   0x43902221,
   0x48076008,
   0x68c34700,
   0x230260c3,
   0xd1fd1e5b,
   0x68c32210,
   0x60c34393,
   0x4770618a,
   0x40048000,
   0x00005c01,
   0x4801b430,
   0x00004700,
   0x00020efd,
   0x79654c07,
   0xf809f000,
   0x40697961,
   0xd5030749,
   0x4a042101,
   0x60110389,
   0xb570bd70,
   0x47084902,
   0x21000380,
   0x40041108,
   0x0000592d,
   0xf819f000,
   0x296cb2e1,
   0x2804d00b,
   0x2806d001,
   0x4910d107,
   0x07c97809,
   0x7821d103,
   0xd4000709,
   0x490d2002,
   0x210c780a,
   0xd0024211,
   0x2280490b,
   0xb003600a,
   0xb5f0bdf0,
   0x4909b083,
   0x20004708,
   0x47884908,
   0x78014804,
   0x43912240,
   0x48067001,
   0x00004700,
   0x210000c8,
   0x21000133,
   0xe000e200,
   0x00031641,
   0x000063f7,
   0x00031b23,
   0x4700b570,
   0xfa8af001,
   0x47004800,
   0x00007f57,
   0xfa8af001,
   0x47004800,
   0x0000881b,
   0x0a889905,
   0xd1052880,
   0x78884913,
   0x0f800780,
   0xfa94f001,
   0x47004800,
   0x00006ed9,
   0x480fb40f,
   0x290088c1,
   0x4610d002,
   0xfa88f001,
   0x0a9b9b07,
   0x2b834d08,
   0x4c08d108,
   0x069b8923,
   0xf000d504,
   0x2800f805,
   0x3542d000,
   0x4728bc0f,
   0x4804b570,
   0x00004700,
   0x00020b1f,
   0x21000160,
   0x21000380,
   0x000209eb,
   0x781a4b09,
   0x43a22408,
   0xd0002800,
   0x701a4322,
   0x47104a00,
   0x00008e83,
   0x78084903,
   0xd4010700,
   0x47004802,
   0x00004770,
   0x21000380,
   0x00007e5f,
   0x20284a04,
   0x48044790,
   0x60412101,
   0x4a044803,
   0x47106041,
   0x0000424f,
   0x40045000,
   0x40046000,
   0x00004285,
   0x78184b0d,
   0xd0042800,
   0x4a0d480c,
   0xb0056002,
   0x480abdf0,
   0x68034a0b,
   0xd10a429a,
   0x8902480a,
   0x1ad24b0a,
   0x2a01d001,
   0x6e40d103,
   0x47884908,
   0x4b089903,
   0x00004718,
   0x21005830,
   0x210002a8,
   0x210055a3,
   0x000203bd,
   0x21000160,
   0x00001821,
   0x000035f1,
   0x000006bd,
   0x4d1fb570,
   0xb2c47828,
   0x4780481e,
   0x28037828,
   0x2c03d134,
   0x481cd032,
   0x0d406880,
   0x481a07c2,
   0x31604601,
   0x2a003080,
   0x241fd003,
   0x8845570c,
   0x241ee002,
   0x8805570c,
   0xd01f2c00,
   0x4a154813,
   0x79006941,
   0x10484341,
   0x69494911,
   0x49101840,
   0x7f493940,
   0x05404790,
   0x42691540,
   0xdb0d4288,
   0xdc0b42a8,
   0x69994b0c,
   0x4602b288,
   0x43620c09,
   0x12520409,
   0xb2801880,
   0x61984308,
   0x0000bd70,
   0x210002e4,
   0x00004179,
   0x21000028,
   0x21000380,
   0x21000300,
   0x000081cb,
   0x40044040,
   0x21004877,
   0x487775c1,
   0xb5704700,
   0x4d744c74,
   0x6a603c80,
   0xd11d2800,
   0x5d002054,
   0x28002200,
   0x2064d017,
   0x08805d00,
   0xd01207c0,
   0x888868a9,
   0x28010b80,
   0x486cd10d,
   0x08407dc0,
   0xd00807c0,
   0x30204869,
   0x68006980,
   0xd0022800,
   0x60a86229,
   0x622ae000,
   0x47804865,
   0x29006a61,
   0x6a29d103,
   0xd0002900,
   0xbd7060a9,
   0x4c5db5f8,
   0x3c804960,
   0x30404620,
   0x2a007d02,
   0x7e80d02e,
   0x28034d58,
   0x2804d002,
   0xe027d003,
   0x75e82001,
   0x2064e024,
   0x08805d00,
   0xd01f07c0,
   0x888068a8,
   0x28010b80,
   0x4851d11a,
   0x7dc07dea,
   0xd0132a00,
   0x07c008c0,
   0x4626d012,
   0x7b773620,
   0x46014788,
   0xd1084339,
   0x06097d21,
   0x8869d505,
   0x29010b89,
   0x2100d101,
   0xbdf87371,
   0xe7ea0880,
   0xbdf84788,
   0x4c40b5f8,
   0x3c804944,
   0x36204626,
   0x46257b70,
   0x90003540,
   0x00b8792f,
   0x68801840,
   0x28004780,
   0x493ad128,
   0x09097dc9,
   0xd02307c9,
   0x32644622,
   0xd0202f15,
   0x23007e29,
   0x07ff094f,
   0x7d6dd003,
   0xd0002d00,
   0x9f002301,
   0x43bb6fa5,
   0x7b73d012,
   0xd00f2b00,
   0x065b7d23,
   0x88d2d50c,
   0x2a010b92,
   0x08c9d108,
   0xd00507c9,
   0x0b8988a9,
   0xd1012901,
   0x73712100,
   0x7eabbdf8,
   0x2b017de9,
   0x2300d0e3,
   0xb510e7e1,
   0x3c804c1f,
   0x31404621,
   0x28017d08,
   0x481ed134,
   0x08407dc0,
   0xd02f07c0,
   0x30604620,
   0x08527942,
   0xd02907d2,
   0x0b808940,
   0xd1252801,
   0x09417e08,
   0xd00c07c9,
   0x07006fa1,
   0x0fc08809,
   0x04090240,
   0x66604308,
   0x1c806fa0,
   0xf978f001,
   0x480ee013,
   0x69803020,
   0x28006840,
   0x4a0fd00e,
   0x78012300,
   0x1a5956d3,
   0x00c9d408,
   0x78411808,
   0xd00307c9,
   0x66616801,
   0x66a06840,
   0x47804808,
   0x0000bd10,
   0x210001e0,
   0x00022a15,
   0x210000c8,
   0x00023d8f,
   0x00023075,
   0x00025500,
   0x210004e0,
   0x00024959,
   0x22ff0783,
   0x409a0edb,
   0x0e090789,
   0x28004099,
   0x0700da0b,
   0x38080f00,
   0x009b0883,
   0x181848ff,
   0x439369c3,
   0x61c3430b,
   0x08834770,
   0x009b48fc,
   0x68031818,
   0x430b4393,
   0x47706003,
   0x206549f9,
   0x09805c40,
   0x48f807c2,
   0x7e82d00a,
   0xd1072a02,
   0x2a027d42,
   0x2a01d004,
   0x2200d002,
   0x734a3120,
   0x49f27900,
   0x18400080,
   0x47006880,
   0x4aedb5ff,
   0x185b7e93,
   0x600b49ee,
   0x4bee8911,
   0xd1044299,
   0x46112386,
   0x31a85c9d,
   0x217be003,
   0x46115c8d,
   0x7989317c,
   0xd17e0989,
   0x690949e7,
   0xd07e2900,
   0x0426680c,
   0xb2e30e36,
   0xd0222e01,
   0x006d2610,
   0x1eed46b6,
   0x7bd23220,
   0x2a0146ac,
   0x1422d01e,
   0x4cdeb252,
   0x6824684e,
   0x009b3108,
   0x1f1b185b,
   0x40341880,
   0x93023030,
   0x94004ad9,
   0x23019103,
   0x4bce6013,
   0x691d2222,
   0x433d2710,
   0x2300611d,
   0x2608e032,
   0x46b600ad,
   0xe7db1fad,
   0xe7e01622,
   0x4fd0c920,
   0x4034406c,
   0x462c9401,
   0x032d2501,
   0x4dcb603d,
   0x60283540,
   0x3d404dc9,
   0x1a2d686d,
   0x4dc8d506,
   0x682f3d80,
   0xd40104ff,
   0xe7fabf20,
   0x9d014fc2,
   0x9d02633d,
   0x42a94470,
   0x9903d900,
   0x686d4dbb,
   0xd0064215,
   0x3a804ab9,
   0x27026815,
   0x601543bd,
   0x1c5b2200,
   0xd3d14563,
   0x49b89d00,
   0x40354065,
   0x684b3940,
   0xd4fc1a1b,
   0x630548b3,
   0x210048b3,
   0x4ba96001,
   0x21106918,
   0x61184388,
   0xd00b2a00,
   0x684148aa,
   0xd0fc4211,
   0x388048a8,
   0x22026801,
   0xe002e000,
   0x60014391,
   0x48a4bdff,
   0x68422122,
   0xd0fc420a,
   0x3a804aa1,
   0x20026811,
   0x60114381,
   0xb510bdff,
   0x69634ca3,
   0x70427083,
   0x42911562,
   0x2102dd03,
   0x71017001,
   0x2101e001,
   0x69a17001,
   0x8041489d,
   0x3940499b,
   0x70416ac9,
   0xb5f3bd10,
   0x4a93488f,
   0xb0818901,
   0xd1024291,
   0x35a84605,
   0x4605e001,
   0x3020357c,
   0x48947bc6,
   0x05806900,
   0x2e011600,
   0x1c40d002,
   0xe0001040,
   0x498f301e,
   0x6a093140,
   0x4b824a8e,
   0x691a4351,
   0x6a1b0e09,
   0xd01d2e01,
   0x01591852,
   0x316731ff,
   0x18544b7f,
   0x68d93340,
   0xb2894f81,
   0xb2821a08,
   0x68783f40,
   0xd4fc1b00,
   0x802960da,
   0x20504982,
   0x81284788,
   0x28009801,
   0x79aad008,
   0xf7ff9902,
   0xe007ffaa,
   0x01191852,
   0xe7e131ce,
   0x38404876,
   0x70e86ac0,
   0x79294879,
   0x43486840,
   0x2e0108c1,
   0x4620d00b,
   0x340e380f,
   0x1b12687a,
   0x4a74d4fc,
   0x61930c0b,
   0x6151b289,
   0x4620bdfe,
   0x3409380d,
   0xb5f0e7f2,
   0x46844c5f,
   0xb0874620,
   0x90023020,
   0x90047bc0,
   0x30404620,
   0x79029003,
   0x35a84625,
   0x2a1c2700,
   0x2a07d006,
   0x2a34d00b,
   0x2a1dd009,
   0xe132d007,
   0x28007968,
   0x6a20d002,
   0xda7e2803,
   0x2a1de12a,
   0x7d20d040,
   0x357c4625,
   0x0fc10680,
   0x28007968,
   0x2900d074,
   0x494fd072,
   0x39209b04,
   0x7f099105,
   0xd0372b01,
   0x0f090709,
   0x712b004b,
   0x025b2301,
   0x2300469e,
   0x93019300,
   0xd0402900,
   0x07db0983,
   0x2321d00c,
   0x7f1b061b,
   0xd0012b00,
   0x401823f7,
   0x781b4b4b,
   0xd0012b00,
   0x401823ef,
   0x09c34e42,
   0x42337836,
   0x2100d000,
   0x06834e45,
   0x1f360f5b,
   0xd0122b07,
   0x07db08c3,
   0x2021d013,
   0x76470600,
   0xe01c9600,
   0x21017dc0,
   0x0f000700,
   0xd0bd2804,
   0xe7bb2100,
   0x71290909,
   0x2001e7c8,
   0x46860280,
   0x0900e7eb,
   0xd00907c0,
   0x20012321,
   0x7658061b,
   0x90004833,
   0x02402001,
   0xe0009001,
   0x48232100,
   0x38402307,
   0x232263c3,
   0x68404820,
   0xd0fb4218,
   0x3840481e,
   0x4b2b6b40,
   0x482861d8,
   0x69033040,
   0x43b32610,
   0x4b286103,
   0x07806958,
   0x4826d1fc,
   0x68003040,
   0x06c371a8,
   0xe09ce001,
   0x0edbe0aa,
   0x28131e98,
   0x2302d300,
   0xd0632a1d,
   0x5503207b,
   0x30084660,
   0x29004684,
   0x9805d06f,
   0x7f4600df,
   0x2e041bbe,
   0x2604da00,
   0x28019804,
   0x00b0d055,
   0x300e4b0e,
   0xe0293340,
   0xe000ed00,
   0xe000e400,
   0x21000160,
   0x210001a0,
   0x00025500,
   0x40045080,
   0x00001826,
   0x210000e8,
   0x40022080,
   0x40043040,
   0xe000e280,
   0x40046080,
   0x21005830,
   0x400452c0,
   0x00155556,
   0x0000424f,
   0x210002c0,
   0x40045180,
   0x21000020,
   0x40042100,
   0x40042000,
   0x46636298,
   0x48ff18fb,
   0x434e6203,
   0x457648fe,
   0x46706046,
   0x4606dd00,
   0x990148fc,
   0x99016041,
   0x1e491989,
   0x68016081,
   0x43192321,
   0x20026001,
   0x6a279001,
   0xd0122a1d,
   0x62271c7f,
   0x98026267,
   0x28017bc0,
   0xe018d014,
   0x55032086,
   0x00f7e79d,
   0x371648ef,
   0x01186287,
   0x18c34663,
   0x9803e7d3,
   0x7dc01ebf,
   0xd50806c0,
   0x90012005,
   0xe01ee005,
   0x49e848e4,
   0xf7ff3040,
   0x9801fb46,
   0xdd064287,
   0x463179aa,
   0xf7ff9800,
   0x2002fe5e,
   0x4631e00c,
   0xf7ff9800,
   0x49dffe6e,
   0x6ac93140,
   0x00f970e9,
   0xf7ff3908,
   0x2003fdab,
   0xb00770a8,
   0x2001bdf0,
   0x2a1d70a8,
   0x6a20d004,
   0x62201c40,
   0xe0046260,
   0x70a82004,
   0xe00076a7,
   0x48d170af,
   0x49cd6287,
   0x62084660,
   0xd0e82a1d,
   0x7bc09802,
   0xd1e42801,
   0x304048c8,
   0x06c968c1,
   0x2100d5fc,
   0x29021c49,
   0x49c8dbfc,
   0xfb07f7ff,
   0xb5fee7d7,
   0x4cc648c7,
   0x46264780,
   0x900036a0,
   0x28007b70,
   0x6a20d051,
   0xdb4e2803,
   0x28009800,
   0x4625d14b,
   0x792f3540,
   0xd0462f1b,
   0x7128201d,
   0x30804620,
   0x90022100,
   0x6a2060c1,
   0x00c07ea1,
   0x18083010,
   0xfe79f7ff,
   0x28007ab0,
   0x6aa0d034,
   0xd0032800,
   0x70017bb1,
   0x62a01c40,
   0x06c07de8,
   0x7ab0d521,
   0xd9092802,
   0x6ac148a8,
   0xd0fc07c9,
   0x384048a6,
   0x22026801,
   0x60014311,
   0x4eaa7da8,
   0x75a81ec0,
   0x2003a901,
   0x280047b0,
   0x9802dcfa,
   0x36604626,
   0x89f77980,
   0x18380140,
   0x49a381f0,
   0x47889801,
   0x7da881f7,
   0x18407e29,
   0x6be16260,
   0x47882022,
   0xe0006420,
   0x9800712f,
   0xb5f8bdfe,
   0x48924c97,
   0x35204625,
   0x6ac07bee,
   0x07c02700,
   0x2065d05b,
   0x09805d00,
   0x489507c1,
   0x7e81d025,
   0xd0012903,
   0xd1202902,
   0x2a027d42,
   0x2a01d01d,
   0x7dc2d01b,
   0xd4030693,
   0xd1162902,
   0xd51406d1,
   0x22007b69,
   0xd00f2900,
   0x2e024631,
   0x7ac3d103,
   0xd0002b00,
   0x23042103,
   0x73e94319,
   0x27017dc1,
   0xd5010689,
   0x550a219c,
   0x7900736a,
   0x00804981,
   0x68801840,
   0x90004780,
   0xd0002f00,
   0x980073ee,
   0xd0202801,
   0x7aa034a0,
   0xd31c2805,
   0x06092121,
   0x00807e48,
   0x7f021840,
   0xd0182a02,
   0x77012103,
   0x8a204975,
   0x496a4788,
   0x70082001,
   0x20112102,
   0xfc92f7ff,
   0x49712001,
   0x60080440,
   0x60084970,
   0x3980496e,
   0x98006008,
   0x2001bdf8,
   0x2004bdf8,
   0x496c7708,
   0xe7e37008,
   0x4d61b570,
   0x34a0462c,
   0x1e417aa0,
   0xd8012902,
   0x72a01cc0,
   0x2805b2c0,
   0xd112d321,
   0x28026a68,
   0x4963dd08,
   0x47881e80,
   0x62691c81,
   0xd0012800,
   0xbd702001,
   0x46082100,
   0xfd53f7ff,
   0xf7ff2110,
   0x484cfc95,
   0x07c96ac1,
   0x484ad0fc,
   0x68013840,
   0x43112202,
   0x49476001,
   0x31808920,
   0x485560c8,
   0x28004780,
   0x7aa1d1e5,
   0xd3e22905,
   0x35407ae1,
   0xbd707169,
   0x4850b5f8,
   0x00064780,
   0x4c42d10f,
   0x89224b4e,
   0x429a6820,
   0x7b81d10a,
   0xdd072924,
   0x02c02003,
   0x80e03440,
   0x72202002,
   0xbdf82003,
   0x21004d3d,
   0x429a3560,
   0x6981d12b,
   0x63a10209,
   0x69404943,
   0x4a434788,
   0x7ed14f43,
   0x0988783b,
   0xd10a4218,
   0x20ff2321,
   0x7658061b,
   0x20004b37,
   0x60181f1b,
   0x20016058,
   0x34207038,
   0x28007be0,
   0x2801d002,
   0xe003d10b,
   0x07007f10,
   0xe0010f00,
   0x09007f10,
   0xd0022800,
   0x07c00888,
   0x2100d103,
   0x2000e001,
   0x736972a8,
   0xbdf84630,
   0x491eb5f0,
   0x5c422044,
   0xd00c2a43,
   0xd00d2a04,
   0x3368460b,
   0x4f1e7818,
   0xd0742800,
   0xd01528ff,
   0xd0062a04,
   0x460be009,
   0xe7f3335b,
   0x337b460b,
   0x68cce7f0,
   0x19640145,
   0x242f60cc,
   0x2c015c64,
   0x0640d101,
   0x62480e00,
   0x701820ff,
   0x4c06202f,
   0x34400200,
   0x4d046020,
   0x68636a48,
   0xd04007db,
   0x63ab230f,
   0xe0314e16,
   0x40045040,
   0x21005830,
   0x40048000,
   0x40045300,
   0x40046000,
   0x21000160,
   0x00022dd7,
   0x000231b7,
   0x000232d7,
   0x210001a0,
   0x00025500,
   0x0000423d,
   0xe000e280,
   0xe000e100,
   0x21000020,
   0x0002175f,
   0x000234eb,
   0x00022775,
   0x00001826,
   0x00025247,
   0x210000c8,
   0x210004e1,
   0x0000ffff,
   0xdd072801,
   0x1e80632e,
   0xdd1a2800,
   0x07db6863,
   0xe006d1f6,
   0x63a82007,
   0x632820ff,
   0x2800e011,
   0x6863dd0f,
   0x42332614,
   0x4af9d0b5,
   0x02127b52,
   0x4bf86022,
   0x601a2208,
   0x601a4bf7,
   0x20016248,
   0x0090bdf0,
   0x688019c0,
   0x20006408,
   0xb5f8bdf0,
   0x49f34cf2,
   0x42888920,
   0x2101d14f,
   0x46084af1,
   0x46254790,
   0x35402602,
   0xd1182800,
   0x478048ee,
   0xd0022800,
   0x02c02003,
   0x2100e011,
   0x75296827,
   0x30804620,
   0x900068ba,
   0x38606042,
   0x7cc16761,
   0xd0082900,
   0x7bc049e5,
   0x28004788,
   0x80e8d003,
   0x2003722e,
   0x6938bdf8,
   0x020049e1,
   0x48d863a0,
   0x7c403820,
   0x68f876a0,
   0x22014788,
   0x21004bdb,
   0x3b6c4610,
   0x48d94798,
   0x478038ac,
   0x68419800,
   0x784a2000,
   0xd1cd0793,
   0xd5070752,
   0x78006848,
   0x0ec006c0,
   0x29131e81,
   0x2000d300,
   0x6be176e8,
   0x4788203d,
   0x20006420,
   0x48cebdf8,
   0xbdf84780,
   0x4cc6b570,
   0x5d002044,
   0x008049cb,
   0x68801840,
   0x46054780,
   0xd0212801,
   0x5d00207e,
   0xd31d2805,
   0x06002021,
   0x00897e41,
   0x7f0a1809,
   0xd0172a02,
   0x77082003,
   0x49c13480,
   0x478888a0,
   0x200149c0,
   0x21027008,
   0xf7ff2011,
   0x2101faf3,
   0x044948b1,
   0x48b16001,
   0x48af6001,
   0x60013880,
   0xbd704628,
   0x77012104,
   0x700148b7,
   0xb570e7e4,
   0x46254cab,
   0x7fa83560,
   0x28021e40,
   0x6aa0d80d,
   0xd0042800,
   0x5d092182,
   0x1c407001,
   0x6a6062a0,
   0x62601e40,
   0x1cc07fa8,
   0x7fa877a8,
   0xd3212805,
   0x6a60d112,
   0xdd082802,
   0x1e8049a8,
   0x1c814788,
   0x28006261,
   0x2001d001,
   0x2100bd70,
   0xf7ff4608,
   0x2110fbaa,
   0xfaecf7ff,
   0x6ac148a1,
   0xd0fc07c9,
   0x3840489f,
   0x22026801,
   0x60014311,
   0x8ba8499c,
   0x60c83180,
   0x36404626,
   0x49947930,
   0x18400080,
   0x47806880,
   0xd1df2800,
   0x29057fa9,
   0x7fead301,
   0x29047172,
   0x7de1d3d8,
   0xd1022900,
   0x29007e21,
   0x7eead0d2,
   0x015268e1,
   0x60e11889,
   0xb570bd70,
   0x20444d7f,
   0x487b5d46,
   0x30804984,
   0x00b07ec4,
   0x68801840,
   0x4b874780,
   0x781a09a1,
   0xd10a4211,
   0x21ff2221,
   0x76510612,
   0x2200497f,
   0x600a1f09,
   0x2101604a,
   0x212f7019,
   0x29025d49,
   0x2e31d008,
   0x07e1d003,
   0xd0032900,
   0x0861e003,
   0xe7f907c9,
   0x35802400,
   0xbd70706c,
   0x4c69b5f8,
   0x46272500,
   0x723d3760,
   0x5d00202f,
   0xd03b2802,
   0x38ac4868,
   0x46264780,
   0x495f3640,
   0x31807ff0,
   0x78496220,
   0x75604308,
   0x6265485b,
   0x7fc53060,
   0xd0062d00,
   0x21207d20,
   0x75204308,
   0x0ec006e8,
   0x49667238,
   0x47887f30,
   0x2d004a65,
   0x4865d011,
   0x4b6061c5,
   0x63982007,
   0x35404d5e,
   0x69502105,
   0xd1fc0780,
   0x42086868,
   0x485dd0f9,
   0x68003040,
   0x7f306318,
   0xd0012800,
   0x62106e60,
   0x20396be1,
   0x64204788,
   0xbdf82000,
   0xe7fa4857,
   0x46014845,
   0x7bca3120,
   0x76823060,
   0x73c82002,
   0x47004853,
   0xb5004940,
   0x71083140,
   0xd0512822,
   0x2815dc15,
   0xdc08d044,
   0xf0004603,
   0x350afb5d,
   0x472c2c31,
   0x372c2c2c,
   0x46032c39,
   0xf0003b19,
   0x3f09fb53,
   0x45223122,
   0x47223322,
   0x28380022,
   0xdc0cd020,
   0xd01f2831,
   0x2823dc04,
   0x2826d034,
   0xe023d111,
   0xd0192835,
   0xd10c2836,
   0x283de018,
   0xdc04d020,
   0xd021283b,
   0xd104283c,
   0x2843e01c,
   0x2847d01c,
   0x492bd014,
   0x18400080,
   0xbd006880,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xbd004834,
   0xb5104810,
   0x31604601,
   0x7e89460a,
   0x5419232f,
   0xd05f2902,
   0x06897d01,
   0x6a01d562,
   0xdd5f2901,
   0x78496ec1,
   0x0ec906c9,
   0x2b121e8b,
   0x7d43d858,
   0x75431e5b,
   0xe04de055,
   0x21000048,
   0xe000e280,
   0xe000e100,
   0x21000160,
   0x00001825,
   0x00020bcb,
   0x0002097f,
   0x000207f5,
   0x00025247,
   0x0002485d,
   0x00025500,
   0x0000423d,
   0x21005830,
   0x21000020,
   0x0002175f,
   0x40045040,
   0x210004e1,
   0x00020e45,
   0x40042000,
   0x40042100,
   0x0002469d,
   0x00020f47,
   0x2100512d,
   0x2100509d,
   0x21005043,
   0x21004f93,
   0x21004f29,
   0x21004359,
   0x210043c1,
   0x21004363,
   0x21004435,
   0x210044b7,
   0x21004e77,
   0x21004d65,
   0x21004ccd,
   0x21004c59,
   0x21004b7f,
   0x21004ac3,
   0x21004595,
   0xff0af7fe,
   0xd0002800,
   0xbd102001,
   0x76d12100,
   0xbd102000,
   0x48bcb5f0,
   0x7ec049bc,
   0xb087684d,
   0xd07e09c0,
   0x06122221,
   0x28ff7e50,
   0x49b6d079,
   0x694c3120,
   0xd0742c00,
   0x68617826,
   0x21019101,
   0x91030249,
   0x00804611,
   0x46841840,
   0x28047f00,
   0x9803d001,
   0x2001e002,
   0x90030280,
   0xd9004285,
   0x00a84605,
   0x20009000,
   0x98019004,
   0xd01f2800,
   0x2a006802,
   0x7950d01c,
   0x07000671,
   0x06b00f83,
   0x18180fc0,
   0x18400fc9,
   0x07811c80,
   0xd0030f89,
   0x1a792704,
   0xb2c01808,
   0x210088d2,
   0xd9004282,
   0x98001a11,
   0xd9034288,
   0x90001ac8,
   0x90042001,
   0x49974662,
   0x91057f57,
   0x20007b09,
   0xd0022900,
   0xd00007f1,
   0x06f92001,
   0x07b20ec9,
   0x2201d50d,
   0x2b131e8b,
   0x2200d300,
   0xd50006bb,
   0x09bb2200,
   0xd0012b03,
   0xd1002a00,
   0x78622001,
   0xd802428a,
   0x428a78a2,
   0x2001d200,
   0x077209b9,
   0x2900d501,
   0x0732d007,
   0x2901d501,
   0x06f2d003,
   0x2902d502,
   0x2001d100,
   0x290078e1,
   0x2800d001,
   0x7a60d005,
   0xe0c2e000,
   0x72601c40,
   0x4b7ae0bf,
   0x9900aa02,
   0x47989801,
   0xd0030780,
   0x1c407aa0,
   0xe0aa72a0,
   0x00809800,
   0xd90142a8,
   0x08859800,
   0x22219802,
   0x1c407007,
   0x90020612,
   0x008b7e51,
   0x4696189a,
   0x2a047f12,
   0x1c49d04b,
   0x9905b2ca,
   0x7b0923fd,
   0x9b044019,
   0x4319005b,
   0x685f4b64,
   0x429f9b03,
   0x2304d901,
   0x23e74319,
   0x00d24019,
   0x22df4311,
   0x9a054011,
   0x01527bd2,
   0x46724311,
   0x4a5b7f93,
   0x8852b2c9,
   0x0612468c,
   0x00570f12,
   0x19d22101,
   0xd3004293,
   0x46622100,
   0x401a23bf,
   0x430a0189,
   0x1c407002,
   0x06b19002,
   0x2121d508,
   0x7e4a0609,
   0x18510092,
   0x70017f89,
   0x90021c40,
   0xd5050670,
   0x7841484a,
   0x70019802,
   0x90021c40,
   0x07999b02,
   0xd00d0f89,
   0x22042000,
   0x46021a51,
   0x2203e003,
   0x541ae7b3,
   0x42811c40,
   0x9802dcfb,
   0x90021808,
   0x06002021,
   0x4f407e40,
   0x28019e02,
   0x4f3fd100,
   0x2050493f,
   0x23014788,
   0x4684025b,
   0xda08429d,
   0xe0032000,
   0x587a0081,
   0x1c405072,
   0xdbf942a8,
   0x2000e016,
   0x587a0081,
   0x50721c40,
   0xdbf94298,
   0x3dff2201,
   0x02d22100,
   0x48303dff,
   0xe0053d02,
   0x59c3008f,
   0x18bf19bf,
   0x603b1c49,
   0xdbf742a9,
   0x4660492b,
   0x4788311c,
   0x9801492a,
   0x7a204788,
   0x1c402101,
   0x48287220,
   0x608103c9,
   0x1e4078e0,
   0xd20028fe,
   0x212170e0,
   0x7e480609,
   0x18400080,
   0x2a047f02,
   0x2100d00e,
   0x20017701,
   0x0440491f,
   0x49166008,
   0x70082000,
   0x2080491c,
   0x60083180,
   0xbdf0b007,
   0x77082000,
   0x70084919,
   0x4810e7ed,
   0x30204b18,
   0x88c07a01,
   0x47182200,
   0x4b168801,
   0x42994a16,
   0x20a8d103,
   0x48158510,
   0x4b12e006,
   0x42991e5b,
   0x208cd105,
   0x48128510,
   0x20016250,
   0x49114770,
   0x00004708,
   0x210000c8,
   0x21005830,
   0x21000180,
   0x0000369b,
   0x21008000,
   0x2100c000,
   0x00004835,
   0x00003a5b,
   0x40041100,
   0xe000e180,
   0x21000020,
   0x0000069f,
   0x00001826,
   0x21000108,
   0x000205e3,
   0x000205e9,
   0x000205fb,
   0x490cb510,
   0x4a0c4788,
   0x5e512106,
   0xd0072900,
   0xd0052902,
   0xd0032909,
   0xd0012910,
   0xd1072911,
   0x43c92177,
   0xdd014288,
   0xdd012800,
   0x43c0207f,
   0x0000bd10,
   0x000065a9,
   0x21000380,
   0x4810b510,
   0x481088c1,
   0xd0182905,
   0x68214c0f,
   0x0052084a,
   0x6ba26022,
   0x00520852,
   0x602163a2,
   0xfd88f7fe,
   0x07006ba0,
   0x2001d408,
   0x60606020,
   0x1c402000,
   0xdbfc280c,
   0x62202014,
   0xf7febd10,
   0xbd10fd79,
   0x21000380,
   0x00005b3f,
   0x40046000,
   0x490c6b80,
   0x0f000700,
   0x47707148,
   0x490a4a09,
   0x79502318,
   0x7e4956cb,
   0x428118c0,
   0x4608dd01,
   0x280fe002,
   0x200fdd00,
   0x090989d1,
   0x43010109,
   0x477081d1,
   0x210002e0,
   0x21000088,
   0x79c94908,
   0x07d208ca,
   0x40c1d008,
   0x07c94806,
   0x4906d001,
   0x4906e000,
   0x60c11c49,
   0x20004770,
   0x00004770,
   0x210000e8,
   0x21000028,
   0x00000188,
   0x00000150,
   0x4b272201,
   0x48252102,
   0xb5104718,
   0x47804825,
   0x6a404825,
   0xd10d2800,
   0x200a4924,
   0x28005608,
   0x1c40da09,
   0x4608d007,
   0x6a403820,
   0x42884920,
   0x4780d100,
   0xf7ffbd10,
   0xbd10ffe3,
   0x4b1e2100,
   0x46084a1c,
   0x20014718,
   0x0240491c,
   0x481c6008,
   0x780122fb,
   0x70014011,
   0x38ec4812,
   0xb5104700,
   0x47884918,
   0x39204911,
   0xd0072801,
   0xd5040402,
   0x85082000,
   0x62484814,
   0xbd102001,
   0x4b096a4a,
   0x429a3bec,
   0x4a11d101,
   0x4907e005,
   0x4b106a4a,
   0xd1f2429a,
   0x624a4a0f,
   0x0000bd10,
   0x00000806,
   0x0000069f,
   0x000292a1,
   0x21000108,
   0x21000154,
   0x00029263,
   0x21005727,
   0x0002b4b5,
   0xe000e180,
   0x21000380,
   0x000296f7,
   0x2100571d,
   0x21005763,
   0x00029569,
   0x21005759,
   0x07810882,
   0x0ec90092,
   0x78c0ca0c,
   0x424940ca,
   0x408b3120,
   0x0211431a,
   0x06000a09,
   0x47704308,
   0x4674b430,
   0x78251e64,
   0x42ab1c64,
   0x461dd200,
   0x005b5d63,
   0xbc3018e3,
   0x00004718,
   0x00000000,
   0x00000000,
};
#define _NWORD_PATCHIMAGE_MULTI_PROTOCOL_RTLS 1531

CPE_PATCH_TYPE patchCpeHd[] = {
   0x00000000,
};
#define _NWORD_PATCHCPEHD_MULTI_PROTOCOL_RTLS 1

#define _NWORD_PATCHSYS_MULTI_PROTOCOL_RTLS 0

#define _IRQ_PATCH_0 0x210042bd


#ifndef _MULTI_PROTOCOL_RTLS_SYSRAM_START
#define _MULTI_PROTOCOL_RTLS_SYSRAM_START 0x20000000
#endif

#ifndef _MULTI_PROTOCOL_RTLS_CPERAM_START
#define _MULTI_PROTOCOL_RTLS_CPERAM_START 0x21000000
#endif

#define _MULTI_PROTOCOL_RTLS_SYS_PATCH_FIXED_ADDR 0x20000000

#define _MULTI_PROTOCOL_RTLS_PATCH_VEC_ADDR_OFFSET 0x03D0
#define _MULTI_PROTOCOL_RTLS_PATCH_TAB_OFFSET 0x03D4
#define _MULTI_PROTOCOL_RTLS_IRQPATCH_OFFSET 0x0480
#define _MULTI_PROTOCOL_RTLS_PATCH_VEC_OFFSET 0x404C

#define _MULTI_PROTOCOL_RTLS_PATCH_CPEHD_OFFSET 0x04E0

#ifndef _MULTI_PROTOCOL_RTLS_NO_PROG_STATE_VAR
static uint8_t bMultiProtocolRtlsPatchEntered = 0;
#endif

PATCH_FUN_SPEC void enterMultiProtocolRtlsCpePatch(void)
{
#if (_NWORD_PATCHIMAGE_MULTI_PROTOCOL_RTLS > 0)
   uint32_t *pPatchVec = (uint32_t *) (_MULTI_PROTOCOL_RTLS_CPERAM_START + _MULTI_PROTOCOL_RTLS_PATCH_VEC_OFFSET);

   memcpy(pPatchVec, patchImageMultiProtocolRtls, sizeof(patchImageMultiProtocolRtls));
#endif
}

PATCH_FUN_SPEC void enterMultiProtocolRtlsCpeHdPatch(void)
{
#if (_NWORD_PATCHCPEHD_MULTI_PROTOCOL_RTLS > 0)
   uint32_t *pPatchCpeHd = (uint32_t *) (_MULTI_PROTOCOL_RTLS_CPERAM_START + _MULTI_PROTOCOL_RTLS_PATCH_CPEHD_OFFSET);

   memcpy(pPatchCpeHd, patchCpeHd, sizeof(patchCpeHd));
#endif
}

PATCH_FUN_SPEC void enterMultiProtocolRtlsSysPatch(void)
{
}

PATCH_FUN_SPEC void configureMultiProtocolRtlsPatch(void)
{
   uint8_t *pPatchTab = (uint8_t *) (_MULTI_PROTOCOL_RTLS_CPERAM_START + _MULTI_PROTOCOL_RTLS_PATCH_TAB_OFFSET);
   uint32_t *pIrqPatch = (uint32_t *) (_MULTI_PROTOCOL_RTLS_CPERAM_START + _MULTI_PROTOCOL_RTLS_IRQPATCH_OFFSET);


   pPatchTab[21] = 0;
   pPatchTab[1] = 1;
   pPatchTab[18] = 2;
   pPatchTab[81] = 3;
   pPatchTab[26] = 4;
   pPatchTab[139] = 5;
   pPatchTab[163] = 6;
   pPatchTab[76] = 7;
   pPatchTab[62] = 8;
   pPatchTab[64] = 9;
   pPatchTab[91] = 10;
   pPatchTab[79] = 11;
   pPatchTab[140] = 12;
   pPatchTab[150] = 13;
   pPatchTab[107] = 14;
   pPatchTab[13] = 15;
   pPatchTab[31] = 16;
   pPatchTab[152] = 17;
   pPatchTab[151] = 18;
   pPatchTab[73] = 19;
   pPatchTab[164] = 20;
   pPatchTab[40] = 21;

   pIrqPatch[1] = _IRQ_PATCH_0;
}

PATCH_FUN_SPEC void applyMultiProtocolRtlsPatch(void)
{
#ifdef _MULTI_PROTOCOL_RTLS_NO_PROG_STATE_VAR
   enterMultiProtocolRtlsSysPatch();
   enterMultiProtocolRtlsCpePatch();
#else
   if (!bMultiProtocolRtlsPatchEntered)
   {
      enterMultiProtocolRtlsSysPatch();
      enterMultiProtocolRtlsCpePatch();
      bMultiProtocolRtlsPatchEntered = 1;
   }
#endif
   enterMultiProtocolRtlsCpeHdPatch();
   configureMultiProtocolRtlsPatch();
}

void refreshMultiProtocolRtlsPatch(void)
{
   enterMultiProtocolRtlsCpeHdPatch();
   configureMultiProtocolRtlsPatch();
}

void cleanMultiProtocolRtlsPatch(void)
{
#ifndef _MULTI_PROTOCOL_RTLS_NO_PROG_STATE_VAR
   bMultiProtocolRtlsPatchEntered = 0;
#endif
}

void rf_patch_cpe_multi_protocol_rtls(void)
{
   applyMultiProtocolRtlsPatch();
}

#undef _IRQ_PATCH_0

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif


