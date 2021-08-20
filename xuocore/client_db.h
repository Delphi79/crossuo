// SPDX-License-Identifier: AGPL-3.0-or-later
// SPDX-FileCopyrightText: 2020 Danny Angelo Carminati Grein

#pragma once

static client_info client_db[] = {
    { 0xcbfe27fe3ad70296, 0x4fad96e5, 0x01170000 }, // 1.23.0.0
    { 0x45511e8b6068c1cb, 0xcd445748, 0x01172562 }, // 1.23.37b
    { 0xd21c1059400b344f, 0x7e055066, 0x01190000 }, // 1.25.0.0
    { 0x921ebe00798c1de9, 0xdd0297b9, 0x01191e00 }, // 1.25.30.0
    { 0x520e7f14a649dfd8, 0x37a3834c, 0x01191f00 }, // 1.25.31.0
    { 0xf95c4774baaf33e7, 0x13b7ede2, 0x01192000 }, // 1.25.32.0
    { 0xbb0d7facf66962b4, 0xdc0905d9, 0x01192200 }, // 1.25.34.0
    { 0x53e6789f30bc9881, 0x4756c238, 0x01192300 }, // 1.25.35.0
    { 0xf238a7c990b87658, 0xe7ff0676, 0x01192367 }, // 1.25.35g
    { 0x7aa686b3251dc291, 0x7d710ed4, 0x01192368 }, // 1.25.35h
    { 0x08595784a03adebd, 0x511c5f36, 0x01192369 }, // 1.25.35i
    { 0x5e00fb8b56756a4c, 0xbf0f2e1e, 0x01192461 }, // 1.25.36a
    { 0xbc5c7907470aa733, 0xbe47e683, 0x01192462 }, // 1.25.36b
    { 0xed746b50f36276e3, 0x0523f863, 0x01192463 }, // 1.25.36c
    { 0xacdca9e88924e737, 0xf3125dc1, 0x01192464 }, // 1.25.36d
    { 0xdc8f3f9fd8ad9295, 0xc39659f5, 0x01192465 }, // 1.25.36e
    { 0xd128dd086c39ed81, 0x8e915440, 0x01192466 }, // 1.25.36f
    { 0xf88a5c82dc7db7f9, 0xfeda6b5a, 0x01192467 }, // 1.25.36g
    { 0x23ccb4aa6cbccefd, 0x5b1af4db, 0x01192468 }, // 1.25.36h
    { 0x39b9a47a88e7ac91, 0xec40f884, 0x01192500 }, // 1.25.37.0
    { 0xcde07c0f4d311f2e, 0x6a666707, 0x01192561 }, // 1.25.37a
    { 0x3b2100e859aba151, 0x74335e0c, 0x01192566 }, // 1.25.37f
    { 0xc51a2fadffdf6337, 0x68921e54, 0x01192567 }, // 1.25.37g
    { 0xc19e2f0a7dd0d366, 0x58dfd5cb, 0x011a0000 }, // 1.26.0.0
    { 0x49a9368d6df8b26d, 0x8c3d9ca4, 0x011a0061 }, // 1.26.0a
    { 0x36996bdc1786510d, 0x72146fb1, 0x011a0062 }, // 1.26.0b
    { 0x9b7c0b4c952b653f, 0xbf2bc901, 0x011a0100 }, // 1.26.1.0
    { 0x6c27ca23b8f500f4, 0x3358e6f3, 0x011a0200 }, // 1.26.2.0
    { 0x2dea79c5f9abd962, 0x9b103119, 0x011a0261 }, // 1.26.2a
    { 0xd9eb5e38e8680719, 0x6b9a6dba, 0x011a0262 }, // 1.26.2b
    { 0x030f229ad85ccc1e, 0x19674a7a, 0x011a0300 }, // 1.26.3.0
    { 0xebe0ddbd6cb747c7, 0x0a99e844, 0x011a0361 }, // 1.26.3a
    { 0x72385116d977e087, 0x1c27e2ca, 0x011a0400 }, // 1.26.4.0
    { 0x8b0078d67ec4637b, 0xca8ef1da, 0x011a0461 }, // 1.26.4a
    { 0xf0d45e35df33a5e1, 0xaf432ca6, 0x011a0462 }, // 1.26.4b
    { 0x7d26fdfbeeac17ee, 0xb618e5b2, 0x011a0469 }, // 1.26.4i
    { 0xc5b9101d77ce345a, 0x7b72f82e, 0x011a046a }, // 1.26.4j
    { 0xab271d76faab3d38, 0xee8697ec, 0x02000000 }, // 2.0.0.0
    { 0x0f3567e0c9344855, 0xefb4749b, 0x02000061 }, // 2.0.0a
    { 0x8f908c30f439774f, 0x2d47ae5a, 0x02000062 }, // 2.0.0b
    { 0xb87d532e80caa467, 0x77c7cd6d, 0x02000063 }, // 2.0.0c
    { 0xd2a1d9f4d11ff7d5, 0x0884474b, 0x02000064 }, // 2.0.0d
    { 0x23da5c3a64a8b262, 0xf34bcf7a, 0x02000065 }, // 2.0.0e
    { 0x934951721da97fe4, 0x30dd3967, 0x02000066 }, // 2.0.0f
    { 0x8507d0c95a8868da, 0x05f7ea87, 0x02000067 }, // 2.0.0g
    { 0x6857d1c0ada02581, 0x6a3d81d5, 0x02000100 }, // 2.0.1.0
    { 0xae515bb46695f0ba, 0x099fdea7, 0x02000161 }, // 2.0.1a
    { 0x0d1ea03a49791cb1, 0xf4a1d59c, 0x02000200 }, // 2.0.2.0
    { 0xb730c33d004f1524, 0x9b820745, 0x02000261 }, // 2.0.2a
    { 0xa3baa3d3b4fe138b, 0x0d181c30, 0x02000361 }, // 2.0.3a
    { 0x7b0ba5e2f71312f8, 0xdb7485a0, 0x02000362 }, // 2.0.3b
    { 0x389ef98b84f639e9, 0x42544a82, 0x02000400 }, // 2.0.4.0
    { 0x0b4ab662591b9d13, 0x195a0904, 0x02000461 }, // 2.0.4a
    { 0x12c4c561a3773fd2, 0xe504bbfd, 0x02000463 }, // 2.0.4c
    { 0xcd1f7fcb52404c75, 0xc1f3bb70, 0x02000464 }, // 2.0.4d
    { 0x13657cf139a04b6a, 0xafb76be0, 0x02000561 }, // 2.0.5a
    { 0xb8013f802460a900, 0x6470bbf7, 0x02000562 }, // 2.0.5b
    { 0x57a6fd694058c7c6, 0x547bb4e5, 0x02000663 }, // 2.0.6c
    { 0x02bb90ce0091167f, 0x23c7312c, 0x02000700 }, // 2.0.7.0
    { 0x80404f307d19ffac, 0x64f67596, 0x0200086b }, // 2.0.8k
    { 0xaa214321b555c2b0, 0x29e6d7ac, 0x0200086c }, // 2.0.8l
    { 0xca9a37e4922fc008, 0x12a9d088, 0x0200086d }, // 2.0.8m
    { 0xde9ae7d18b6a0338, 0x24a5234a, 0x0200086e }, // 2.0.8n
    { 0x80769ad27931c3be, 0x5c79a913, 0x0200086f }, // 2.0.8o
    { 0xc2965bcbc9d54be0, 0xa346ae7e, 0x02000870 }, // 2.0.8p
    { 0x3269936fedb1e683, 0x8f619f2a, 0x02000871 }, // 2.0.8q
    { 0xfa85e84f79b9d8d9, 0x6290f3fa, 0x02000872 }, // 2.0.8r
    { 0x3af78e9e36a110d9, 0xffd8d0c6, 0x02000873 }, // 2.0.8s
    { 0x45c0db015df1bf00, 0xc0c03d83, 0x02000874 }, // 2.0.8t
    { 0xbecb098dd09a7e72, 0xef2f47a8, 0x02000900 }, // 2.0.9.0
    { 0x3a6f3a5e8e6cc6df, 0x95fe5594, 0x02000961 }, // 2.0.9a
    { 0xbfa865e432d237a9, 0xa56fcb1c, 0x03000061 }, // 3.0.0a
    { 0x776ec1d3bf2a0503, 0x191c6d19, 0x03000062 }, // 3.0.0b
    { 0x9acaa3214bdc2c6c, 0x224cebfc, 0x03000064 }, // 3.0.0d
    { 0x0d6cac3b3b2ab819, 0xdb13bddc, 0x03000067 }, // 3.0.0g
    { 0x1a4540e57ddccaa7, 0x45e93969, 0x03000161 }, // 3.0.1a
    { 0x24a93cbf0747c406, 0x86ed0548, 0x03000262 }, // 3.0.2b
    { 0x8b374484b3bfa007, 0x3f5d7e3b, 0x03000263 }, // 3.0.2c
    { 0x4994a9d1d2edbeb5, 0x584afb51, 0x03000265 }, // 3.0.2e
    { 0x9e1bb353a7d9b595, 0xac085988, 0x03000266 }, // 3.0.2f
    { 0x16cb18a152de45b5, 0x5f8742d9, 0x03000267 }, // 3.0.2g
    { 0x53cbd0e7a756163b, 0x5479164a, 0x03000361 }, // 3.0.3a
    { 0xa405422d62a04b2a, 0x30eb2917, 0x0300046d }, // 3.0.4m
    { 0x04151f76ce044686, 0x3cf52bf7, 0x0300046e }, // 3.0.4n
    { 0xc2bec2dc1dde51c7, 0x736752e7, 0x03000470 }, // 3.0.4p
    { 0xdecaa0dbfe1490df, 0x4217914d, 0x0300047a }, // 3.0.4z
    { 0x68756992f1d1f816, 0x2a737cde, 0x03000564 }, // 3.0.5d
    { 0x823804b3fc8fe194, 0xc9c98ca4, 0x03000661 }, // 3.0.6a
    { 0xc49b06d71292aa9e, 0x0c4c0911, 0x03000665 }, // 3.0.6e
    { 0xd0cecaa1b677f066, 0x551a06f7, 0x03000666 }, // 3.0.6f
    { 0xe53721d95d2cd5d8, 0x14486e49, 0x03000667 }, // 3.0.6g
    { 0xc2f9914590b626c9, 0x7290984b, 0x03000668 }, // 3.0.6h
    { 0xdd9b9b148eb5ffb6, 0xbf4544b2, 0x0300066a }, // 3.0.6j
    { 0xd2c716eff3fc9dcb, 0xe838f7ab, 0x0300066d }, // 3.0.6m
    { 0x65683f159ed37050, 0xc0400132, 0x03000761 }, // 3.0.7a
    { 0x120da286b6ff061d, 0x687a0ae7, 0x03000762 }, // 3.0.7b
    { 0x89478a4377b5fd69, 0x8010460a, 0x03000764 }, // 3.0.7d
    { 0x54a9e9cb01528e77, 0xdfd5adc2, 0x03000765 }, // 3.0.7e
    { 0x05a688250aaf4838, 0x1bef58df, 0x03000861 }, // 3.0.8a
    { 0x6849d8068a2425b1, 0xb786c440, 0x03000864 }, // 3.0.8d
    { 0x094ffe143e70a05f, 0xc1698c34, 0x0300086a }, // 3.0.8j
    { 0x31b66b6ac5b57897, 0x7871d91e, 0x0300086f }, // 3.0.8o
    { 0x4a42046b2d723ba2, 0x4d0bf760, 0x03000871 }, // 3.0.8q
    { 0x10074190d6d5f007, 0x5f524ec9, 0x0300087a }, // 3.0.8z
    { 0xaf613f79570c63da, 0xb55bcb85, 0x04000061 }, // 4.0.0a
    { 0x8992f1290443fc9a, 0x11e6f621, 0x04000062 }, // 4.0.0b
    { 0xcb2ee5367e32e342, 0xc63dc0c6, 0x04000063 }, // 4.0.0c
    { 0xdccd5d876c3879e8, 0x86131131, 0x04000065 }, // 4.0.0e
    { 0x111546f5ca56b291, 0x8f88d631, 0x0400006c }, // 4.0.0l
    { 0x4394fc0b73f2e6fd, 0x0aa5455b, 0x0400006f }, // 4.0.0o
    { 0x78fe1b4cd6ac9ed6, 0x0e31b2de, 0x04000070 }, // 4.0.0p
    { 0xbd5aa997ac59bf1a, 0x7968b7c7, 0x04000071 }, // 4.0.0q
    { 0x2725fd4a9f64c997, 0x3567921f, 0x04000a61 }, // 4.0.10a
    { 0x96f31e295233af11, 0x3bcd6ed9, 0x04000a62 }, // 4.0.10b
    { 0x90af61f005bed349, 0xa8e79bc1, 0x04000b61 }, // 4.0.11a
    { 0xf46a8a9c1280ca89, 0x6a895dd8, 0x04000b62 }, // 4.0.11b
    { 0xe71cc5ef35256272, 0x0df3cc24, 0x04000b63 }, // 4.0.11c
    { 0x5afd56fed7c78c9b, 0x20cdd58c, 0x04000b65 }, // 4.0.11e
    { 0xdc954375f0aae297, 0x5081dc1d, 0x04000b66 }, // 4.0.11f
    { 0x884466300d174814, 0xd686d4fd, 0x04000161 }, // 4.0.1a
    { 0xfc667c90627d016b, 0x8fcee235, 0x04000162 }, // 4.0.1b
    { 0x3dc84a98299aee50, 0xc6dca98f, 0x04000261 }, // 4.0.2a
    { 0xc391c58c8d42aa6f, 0x7aeb06bf, 0x04000361 }, // 4.0.3a
    { 0x8aaf859fbf6f37b9, 0xc88868c2, 0x04000362 }, // 4.0.3b
    { 0x5328e4c3541fabee, 0xa8bf09c0, 0x04000363 }, // 4.0.3c
    { 0x66b6b3e612fac53d, 0x9f378165, 0x04000364 }, // 4.0.3d
    { 0x55a20d2c0c458cf0, 0xee6024b2, 0x04000365 }, // 4.0.3e
    { 0xffcf342c06662b99, 0x09c3b32b, 0x04000461 }, // 4.0.4a
    { 0x3db15f32624262ae, 0x486db7de, 0x04000462 }, // 4.0.4b
    { 0xb7df0bde69c56e71, 0x8baee44e, 0x04000474 }, // 4.0.4t
    { 0xb3a65bb5b90393f8, 0x54b93eb2, 0x04000561 }, // 4.0.5a
    { 0x59888e2f93811440, 0xc0f48fc4, 0x04000562 }, // 4.0.5b
    { 0xbc9832c98b9d329d, 0xe5640acd, 0x04000661 }, // 4.0.6a
    { 0x43987721cb0e498d, 0x1ea2351c, 0x04000761 }, // 4.0.7a
    { 0x4bb405a7bd7fe521, 0x2df8110c, 0x04000762 }, // 4.0.7b
    { 0xb97d625975cc7ed9, 0xf4414af5, 0x04000861 }, // 4.0.8a
    { 0x60a0ae88d5e44144, 0x3814ba06, 0x04000862 }, // 4.0.8b
    { 0xff34747305af4fe5, 0xbfbbdbad, 0x04000961 }, // 4.0.9a
    { 0x2d2a05ecac469f49, 0x4b5f3d77, 0x04000962 }, // 4.0.9b
    { 0x6b2b3200116f7be7, 0xc5880d04, 0x05000061 }, // 5.0.0a
    { 0x21be9421f7897bc6, 0xc27a34d1, 0x05000062 }, // 5.0.0b
    { 0x4411054813ce4a06, 0xec9f9d00, 0x05000161 }, // 5.0.1a
    { 0x01bc8eea7c874d8d, 0xa2d3b294, 0x05000162 }, // 5.0.1b
    { 0xdc0433ababca5392, 0xaf77c074, 0x05000163 }, // 5.0.1c
    { 0x5e8ed1cd6e71ce24, 0x89039fc6, 0x05000164 }, // 5.0.1d
    { 0x78ac079425ee2514, 0x83a21115, 0x05000165 }, // 5.0.1e
    { 0xa99c4f0b42f05b8f, 0x9c8bfade, 0x05000166 }, // 5.0.1f
    { 0xf1069cd02d222cf5, 0xfb2e57e4, 0x05000168 }, // 5.0.1h
    { 0x5663a0c75c0decc6, 0xe522a0a5, 0x05000169 }, // 5.0.1i
    { 0x0739e80206d78197, 0x5d8921af, 0x0500016a }, // 5.0.1j
    { 0x56f2f04c4f3748cc, 0xb191892e, 0x05000200 }, // 5.0.2.0
    { 0x43508c1c0c9eb239, 0x46cc46da, 0x05000261 }, // 5.0.2a
    { 0xc8d88ce1e25bf7c3, 0xa5bd2585, 0x05000262 }, // 5.0.2b
    { 0x3bef1284f6161d92, 0x80153d58, 0x05000263 }, // 5.0.2c
    { 0x5bc09f3baeed63db, 0xda1ffaec, 0x05000264 }, // 5.0.2d
    { 0x756e73ab772673be, 0xf0cf955f, 0x05000265 }, // 5.0.2e
    { 0xcda2e13b9fe46be1, 0x1a54bebe, 0x05000266 }, // 5.0.2f
    { 0x34bde34a38dfe491, 0x7422a5c0, 0x05000267 }, // 5.0.2g
    { 0x765d17713157f316, 0x72e023be, 0x05000300 }, // 5.0.3.0
    { 0x06c60d0d38db2386, 0xb046ff19, 0x05000461 }, // 5.0.4a
    { 0x7921731ca7e9d5b9, 0xbb7dd526, 0x05000462 }, // 5.0.4b
    { 0x82c1a2b9d5ddf7a4, 0x1f498ce9, 0x05000463 }, // 5.0.4c
    { 0x6d0846743ebeb054, 0x75c26915, 0x05000464 }, // 5.0.4d
    { 0xfb8d6ad04d9683ac, 0x71a179ce, 0x05000405 }, // 5.0.4.5
    { 0x62e44f2bee16b5e1, 0xa31bba4c, 0x05000500 }, // 5.0.5.0
    { 0xda8fb83860683d4f, 0xe2297dc6, 0x05000501 }, // 5.0.5.1
    { 0x3ce399a3eb8538a8, 0x5dd8f3ee, 0x05000502 }, // 5.0.5.2
    { 0x2290a095e09d0856, 0x4500078f, 0x05000605 }, // 5.0.6.5
    { 0xe7f0b51de5353f28, 0xbc57ee2b, 0x05000600 }, // 5.0.6.0
    { 0xe2b0fa9563819e03, 0xf8c649e9, 0x05000601 }, // 5.0.6.1
    { 0xf5e7e56a8b62b999, 0x8e667032, 0x05000602 }, // 5.0.6.2
    { 0x289d2669cc044289, 0xe7908ff6, 0x05000603 }, // 5.0.6.3
    { 0x2ff0a75600a3f82a, 0xb7d78aed, 0x05000604 }, // 5.0.6.4
    { 0xbda5c01760412706, 0x115dd79a, 0x05000700 }, // 5.0.7.0
    { 0xcc8e4d521e047f57, 0xd948ad88, 0x05000701 }, // 5.0.7.1
    { 0xf5461c98aceae4fa, 0x2b5d6e6d, 0x05000702 }, // 5.0.7.2
    { 0x8537b7933df2c069, 0xb1b56717, 0x05000800 }, // 5.0.8.0
    { 0x9ecc25abd403746c, 0x01c1d997, 0x05000801 }, // 5.0.8.1
    { 0x77b79c34fe72db2f, 0x3c800a12, 0x05000802 }, // 5.0.8.2
    { 0x429d5ba3c90f803b, 0x1284368e, 0x05000803 }, // 5.0.8.3
    { 0xffdd298c12d00416, 0xfafcb943, 0x05000804 }, // 5.0.8.4
    { 0xa0ad7a17e782e4ab, 0x929767f3, 0x05000900 }, // 5.0.9.0
    { 0xae7be71a096aea69, 0x09f4e529, 0x05000901 }, // 5.0.9.1
    { 0x56d6595243f2a6ed, 0xda4dd4d3, 0x06000000 }, // 6.0.0.0
    { 0xb8c5d4c3fe455e63, 0x8867041f, 0x06000a00 }, // 6.0.10.0
    { 0xbf11db442e9323cc, 0x16eddd21, 0x0600010a }, // 6.0.1.10
    { 0x04a3809f4a44f926, 0xd1d5a8a5, 0x06000b00 }, // 6.0.11.0
    { 0x2ce48e50253ed4fb, 0x6104b328, 0x06000101 }, // 6.0.1.1
    { 0xdfef1013ee6be4d8, 0xc311a1aa, 0x06000c00 }, // 6.0.12.0
    { 0xa2057a885df42114, 0xe6130eb7, 0x06000c03 }, // 6.0.12.3
    { 0x32e2f5c946f07add, 0x35e7db1e, 0x06000c04 }, // 6.0.12.4
    { 0x3dc6d90d88f4650f, 0x79ef4a41, 0x06000102 }, // 6.0.1.2
    { 0x01a311e00318b26a, 0x5f3bfcb3, 0x06000d00 }, // 6.0.13.0
    { 0x9d09b27849b249cb, 0x72634876, 0x06000d01 }, // 6.0.13.1
    { 0xb7830ccee2d9949d, 0x91d6a320, 0x06000103 }, // 6.0.1.3
    { 0x249715b9ae5644ec, 0xf16c2cbd, 0x06000e01 }, // 6.0.14.1
    { 0xb6661d4e700f7fb2, 0x571c66eb, 0x06000e02 }, // 6.0.14.2
    { 0xe540b9404e1a4138, 0x6cecc3ad, 0x06000e03 }, // 6.0.14.3
    { 0xfdadaedece49cd3e, 0x1b5bf387, 0x06000e03 }, // 6.0.14.3
    { 0x69055e7c9177f254, 0x497e0b50, 0x06000104 }, // 6.0.1.4
    { 0x7bef5ab180a38a55, 0x315c5def, 0x06000105 }, // 6.0.1.5
    { 0x1f6f28420660df80, 0xdbb86303, 0x06000106 }, // 6.0.1.6
    { 0xcba11af369f90db6, 0x5ff47390, 0x06000107 }, // 6.0.1.7
    { 0xd2918abea20456a2, 0x107b8193, 0x06000108 }, // 6.0.1.8
    { 0xbca3e7d4398b8936, 0x14a07509, 0x06000109 }, // 6.0.1.9
    { 0x9848be13fd96358e, 0x5c2c6c5a, 0x06000200 }, // 6.0.2.0
    { 0x935b951f768c16a4, 0x97bde396, 0x06000300 }, // 6.0.3.0
    { 0xc26540cde4edde89, 0xa7c1103c, 0x06000301 }, // 6.0.3.1
    { 0x7a0d5f595d46dbb9, 0x0ff6ba6c, 0x06000400 }, // 6.0.4.0
    { 0x62fa5e44457c2ee4, 0xa08193f9, 0x06000500 }, // 6.0.5.0
    { 0x9ecdf0eacf5e276d, 0x7bfe2f56, 0x06000600 }, // 6.0.6.0
    { 0x741d6a633eb3847c, 0x9d58354f, 0x06000601 }, // 6.0.6.1
    { 0xef7e153e495150bc, 0x4dacf4b2, 0x06000602 }, // 6.0.6.2
    { 0xc90fedc1b54e2685, 0x8cf4bd5e, 0x06000700 }, // 6.0.7.0
    { 0x592db7e332bd12fb, 0x46c2d12a, 0x06000800 }, // 6.0.8.0
    { 0x02d1eccec693d914, 0xa88423e8, 0x06000900 }, // 6.0.9.0
    { 0x8e6a8d1c4de00453, 0x7df7f69c, 0x06000901 }, // 6.0.9.1
    { 0x2743dd29aee2cadf, 0xdfb34978, 0x06000902 }, // 6.0.9.2
    { 0xceb2d8bb4e8dd594, 0x7ba25709, 0x07000000 }, // 7.0.0.0
    { 0x41ede8bc67af3fc5, 0x2ad81f3d, 0x07000002 }, // 7.0.0.2
    { 0xe388817bb23f39a8, 0x78243978, 0x07000003 }, // 7.0.0.3
    { 0xce7a249e2bf9c83a, 0x8f01551e, 0x07000004 }, // 7.0.0.4
    { 0x3a1b03ad6453c707, 0xf2100540, 0x07000a00 }, // 7.0.10.0
    { 0x46969bf784bf7761, 0x96ab4865, 0x07000a01 }, // 7.0.10.1
    { 0xa53a286c858ab605, 0xb79076b7, 0x07000a02 }, // 7.0.10.2
    { 0xd0fe148654c1a364, 0x5c358409, 0x07000a03 }, // 7.0.10.3
    { 0x5f31c8bcecb55876, 0xa0a02a73, 0x07000b00 }, // 7.0.11.0
    { 0x71172d614b463775, 0x5e12cefb, 0x07000b01 }, // 7.0.11.1
    { 0xa6e947d5fe4e121b, 0xba4cb577, 0x07000b02 }, // 7.0.11.2
    { 0xe2d1852fdfeff8fe, 0xbde3c5cc, 0x07000b03 }, // 7.0.11.3
    { 0xcfc1e443e1f6cb91, 0xa63e9f1f, 0x07000b04 }, // 7.0.11.4
    { 0x0904bbbeb6dd6cc3, 0xc8fab1e7, 0x07000101 }, // 7.0.1.1
    { 0xd4ba8c217f7b0de2, 0x1e714588, 0x07000c00 }, // 7.0.12.0
    { 0x2e100ff13c37760f, 0x259ae047, 0x07000c01 }, // 7.0.12.1
    { 0x8f90443deb2dfb18, 0x503a5999, 0x07000d00 }, // 7.0.13.0
    { 0x36852d5e32a5873b, 0x7ddbfcb1, 0x07000d01 }, // 7.0.13.1
    { 0x05b9c37557e8c243, 0xaee7829a, 0x07000d02 }, // 7.0.13.2
    { 0xa754e8ae61fd738e, 0x53fdd913, 0x07000d03 }, // 7.0.13.3
    { 0x5daebdb03e5b148d, 0x94bf98d2, 0x07000d04 }, // 7.0.13.4
    { 0x8f41a9e0188b9ca0, 0x0ae75586, 0x07000e00 }, // 7.0.14.0
    { 0x4a617bc2311c969b, 0x53070198, 0x07000e02 }, // 7.0.14.2
    { 0xe805ef666c956beb, 0x32f12090, 0x07000e03 }, // 7.0.14.3
    { 0x4e5b1a02c3cc6981, 0x030d4d7b, 0x07000e04 }, // 7.0.14.4
    { 0x252fbbbc48d7d264, 0x97da3918, 0x07000f00 }, // 7.0.15.0
    { 0x9efad38f92526a57, 0x74141ce9, 0x07000f01 }, // 7.0.15.1
    { 0x5b8221ad426988d4, 0xe022d0b9, 0x07000f01 }, // 7.0.15.1
    { 0x3198a7829de0e754, 0xf037a7c7, 0x07001000 }, // 7.0.16.0
    { 0xaaaa68cb7ddb9f39, 0x2e212fc8, 0x07001001 }, // 7.0.16.1
    { 0xea095cd3be416f7d, 0x4cc9dcff, 0x07001003 }, // 7.0.16.3
    { 0x4717eabbb9679d37, 0xd591cedd, 0x07001100 }, // 7.0.17.0
    { 0x3f814b06f01663b3, 0x025ec536, 0x07001200 }, // 7.0.18.0
    { 0x9bc25d19e3584652, 0x2f323238, 0x07001300 }, // 7.0.19.0
    { 0x4193d7569001b095, 0xf22d6de7, 0x07001301 }, // 7.0.19.1
    { 0xe51dbb2b06d514a2, 0xf0811a56, 0x07001400 }, // 7.0.20.0
    { 0xf4b87cbac753154f, 0x55ff7ccb, 0x07001501 }, // 7.0.21.1
    { 0x881a45db89be1559, 0xb1ddf148, 0x07001502 }, // 7.0.21.2
    { 0xf6e2ff5211a79c21, 0xb45810db, 0x07000201 }, // 7.0.2.1
    { 0x9e7fa95f8ed70128, 0xd15e6d18, 0x07001600 }, // 7.0.22.0
    { 0x74c29460b8d853c3, 0x1059e4e8, 0x07001608 }, // 7.0.22.8
    { 0x8a506f0b45615cbb, 0x2ae1c8b8, 0x07000202 }, // 7.0.2.2
    { 0xfcd42a3510baf868, 0x3984b363, 0x07001700 }, // 7.0.23.0
    { 0xd36a6239181feaed, 0x67e7bd69, 0x07001701 }, // 7.0.23.1
    { 0x7522b8e28e1d46ca, 0x478354bb, 0x07001d61 }, // 7.0.29a
    { 0xbd0e7480cb60ba0d, 0x4e07aa68, 0x07001e01 }, // 7.0.30.1
    { 0xaa8f9f9551b2795a, 0xc7d150a1, 0x07000300 }, // 7.0.3.0
    { 0xe5b70ed0b8507eff, 0x1775e3ef, 0x07000301 }, // 7.0.3.1
    { 0xf5b68ea43ecba289, 0x9a24be8e, 0x07000400 }, // 7.0.4.0
    { 0xf26c648f0671033f, 0xa52e0dac, 0x07000401 }, // 7.0.4.1
    { 0x4d94b99f0edb6deb, 0x24d55236, 0x07000402 }, // 7.0.4.2
    { 0x1242defce67d91e7, 0xdb8e4a24, 0x07000403 }, // 7.0.4.3
    { 0x66a3642d2f33588a, 0xb27db396, 0x07002c02 }, // 7.0.44.2
    { 0xbf8af5adad279f61, 0xde422ddb, 0x07000404 }, // 7.0.4.4
    { 0xafdbbc3c643865aa, 0x9019c6c5, 0x07002d41 }, // 7.0.45.65
    { 0x33faf732d954b26b, 0xcc708655, 0x07002d52 }, // 7.0.45.82
    { 0x796780e58ec6526e, 0x20c6bc07, 0x07002d59 }, // 7.0.45.89
    { 0x4951fda348732507, 0x0fe52d78, 0x07000405 }, // 7.0.4.5
    { 0x7d2335757c007bf7, 0xf1a99b3e, 0x07002e00 }, // 7.0.46.0
    { 0xe13417dfea1a4b83, 0x8d90675a, 0x07002e02 }, // 7.0.46.2
    { 0x8c4178b283bfe0e1, 0xfe7cee16, 0x07002f00 }, // 7.0.47.0
    { 0x5cc310061f8d2b5d, 0xabb93990, 0x07002f3e }, // 7.0.47.62
    { 0x5a60e4cf7028c678, 0xaacd317b, 0x07003102 }, // 7.0.49.2
    { 0x9ba91b344c4b5c42, 0x61b002aa, 0x0700313e }, // 7.0.49.62
    { 0xf01cb3c9f0c5916a, 0x72dbceab, 0x07003145 }, // 7.0.49.69
    { 0xcbdb629cb08c6c7c, 0x7cc376d8, 0x07003200 }, // 7.0.50.0
    { 0xc5ec22d8374c1224, 0x24e97091, 0x07000500 }, // 7.0.5.0
    { 0x7bf92e02d4cd7422, 0xf21c65a7, 0x07003402 }, // 7.0.52.2
    { 0x8b53eb30b36d6eec, 0xa446279b, 0x07003501 }, // 7.0.53.1
    { 0x421d3dd3b464ec92, 0x2f093ddc, 0x07003700 }, // 7.0.55.0
    { 0xd7b2e9dc3d8ca9a6, 0xf3b393b8, 0x0700371b }, // 7.0.55.27
    { 0xdfa2709f1daf46b8, 0x1d51c552, 0x0700371e }, // 7.0.55.30
    { 0xbee8b4516bf7e8aa, 0xd12f07b4, 0x07003704 }, // 7.0.55.4
    { 0x4ae26ee284efe767, 0xe8344e21, 0x07003800 }, // 7.0.56.0
    { 0x4ae26ee284efe767, 0xe8344e21, 0x07003800 }, // 7.0.56.0
    { 0xaef05f15cc2f7376, 0x1e9321f7, 0x07003901 }, // 7.0.57.1
    { 0xb2a145934613d5e2, 0x784218f3, 0x07003914 }, // 7.0.57.20
    { 0x246d6b6f32922dd4, 0x45da059c, 0x07003a00 }, // 7.0.58.0
    { 0xcbeae2cc456275fb, 0xb916a745, 0x07003a0c }, // 7.0.58.12
    { 0x6569143485f48c05, 0xc8c430d9, 0x07003a09 }, // 7.0.58.9
    { 0xf3a8eaf1173af6f2, 0xf1b72499, 0x07003b04 }, // 7.0.59.4
    { 0x02ee530b81ec1c45, 0x7d926fa9, 0x07003b05 }, // 7.0.59.5
    { 0x323aed2cb99819bf, 0xdc241556, 0x07003c2f }, // 7.0.60.47
    { 0x29063411f13cf1ef, 0x67c4fabc, 0x07003d0d }, // 7.0.61.13
    { 0x841aca718b91d520, 0x45ad7a9e, 0x07003d01 }, // 7.0.61.1
    { 0x59f69d1d845383ad, 0x867c9d63, 0x07003e02 }, // 7.0.62.2
    { 0x66a0268e84d23adc, 0x5de26bf0, 0x07000602 }, // 7.0.6.2
    { 0xb42ed62b3902309e, 0x8d336a11, 0x07003f02 }, // 7.0.63.2
    { 0x76c0836bbf3f3508, 0xccb8e8a0, 0x07000603 }, // 7.0.6.3
    { 0x27b18c6f903aa6a2, 0x61d7c93a, 0x07004003 }, // 7.0.64.3
    { 0x0ee64dc6269d06cd, 0x8dc212b0, 0x07000604 }, // 7.0.6.4
    { 0x9ad2907dd3ba3a71, 0x80eff920, 0x07000605 }, // 7.0.6.5
    { 0xa27137ad54ac2efe, 0xb9d54417, 0x07000700 }, // 7.0.7.0
    { 0x397db12ad15089e4, 0x204ec33b, 0x07000701 }, // 7.0.7.1
    { 0x17c99afdfe24392a, 0x095a9c1a, 0x07000703 }, // 7.0.7.3
    { 0x9c01707e25c93fb9, 0x940cbfbc, 0x07004a1c }, // 7.0.74.28
    { 0xc9d25c56ccce11fa, 0xf8f412d4, 0x07004b06 }, // 7.0.75.6
    { 0xd8976fdc05034425, 0x8a75961b, 0x07004f1f }, // 7.0.79.31
    { 0xb5fdef58ddff1b8c, 0xd60a403c, 0x07004f06 }, // 7.0.79.6
    { 0x0df02cb2fb43e613, 0x573e7bed, 0x07005000 }, // 7.0.80.0
    { 0xacc146346689f002, 0xac9b6e70, 0x07000800 }, // 7.0.8.0
    { 0xe815bd4b9d75d381, 0x47a33c70, 0x0700510b }, // 7.0.81.11
    { 0x21181c54c7c31bfb, 0xdbd7dd04, 0x07000801 }, // 7.0.8.1
    { 0x229774bfc7eb02d9, 0x6f061bc8, 0x07005211 }, // 7.0.82.17
    { 0x7d8800decd26ad8f, 0x0042e203, 0x07000802 }, // 7.0.8.2
    { 0xb05cf9ed20f21155, 0xf200c0f3, 0x0700531b }, // 7.0.83.27
    { 0x2297f8427d221836, 0xfdc22b13, 0x0700550f }, // 7.0.85.15
    { 0xa0df9bf5db8f0fbf, 0x969cccd9, 0x07005602 }, // 7.0.86.2
    { 0x8e5255b9372a5329, 0x905fcf95, 0x0700570b }, // 7.0.87.11
    { 0xe9bca21b772a304b, 0x35e6a403, 0x07000900 }, // 7.0.9.0
    { 0xfd9167ec1c3bee42, 0x4767d14d, 0x07000901 }, // 7.0.9.1
    // other sources or from github issues
    { 0x5b8221ad426988d4, 0x81992bfb, 0x07000f01 }, // 7.0.15.1 Outlands (#265)
    { 0x00000000fc519294, 0x8393aab8, 0x011a0462 }, // 1.26.4b (#266)
    { 0x8a195244c1e9c44b, 0xde1de66c, 0x011a0461 }, // 1.26.4a (#282)
    { 0x6d3d706a59dc5318, 0x00000000, 0x07000701 }, // 7.0.7.1 (#290)
    { 0xe6df8e7b272b6a3e, 0x3c42b0a2, 0x07005801 }, // 7.0.88.1 (#297)
    { 0, 0, 0 },
};
