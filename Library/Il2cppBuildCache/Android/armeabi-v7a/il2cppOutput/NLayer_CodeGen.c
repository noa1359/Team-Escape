#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32 NLayer.IMpegFrame::get_SampleRate()
// 0x00000002 System.Int32 NLayer.IMpegFrame::get_FrameLength()
// 0x00000003 System.Int32 NLayer.IMpegFrame::get_BitRate()
// 0x00000004 NLayer.MpegVersion NLayer.IMpegFrame::get_Version()
// 0x00000005 NLayer.MpegLayer NLayer.IMpegFrame::get_Layer()
// 0x00000006 NLayer.MpegChannelMode NLayer.IMpegFrame::get_ChannelMode()
// 0x00000007 System.Int32 NLayer.IMpegFrame::get_ChannelModeExtension()
// 0x00000008 System.Int32 NLayer.IMpegFrame::get_SampleCount()
// 0x00000009 System.Boolean NLayer.IMpegFrame::get_HasCrc()
// 0x0000000A System.Void NLayer.IMpegFrame::Reset()
// 0x0000000B System.Int32 NLayer.IMpegFrame::ReadBits(System.Int32)
// 0x0000000C System.Void NLayer.MpegFile::.ctor(System.IO.Stream)
extern void MpegFile__ctor_m180E271C3E12EC3BF945AE39EEB0BEC396BA2646 (void);
// 0x0000000D System.Void NLayer.MpegFile::Init(System.IO.Stream,System.Boolean)
extern void MpegFile_Init_m75FAB23654C9ABF83A6281361B230AD31BEAF9FC (void);
// 0x0000000E System.Void NLayer.MpegFile::Dispose()
extern void MpegFile_Dispose_mE9F73C4640F275B89E6EF07D5288EC80CF13E930 (void);
// 0x0000000F System.Int64 NLayer.MpegFile::get_SampleCount()
extern void MpegFile_get_SampleCount_m93F7E4D23ADAD6DA2526B97135E397FF75A9B256 (void);
// 0x00000010 System.Int32 NLayer.MpegFile::get_SampleRate()
extern void MpegFile_get_SampleRate_m8887910DE484533EDB050027202328235CFEBB9F (void);
// 0x00000011 System.Int32 NLayer.MpegFile::get_Channels()
extern void MpegFile_get_Channels_mD0105D487810533A23515E43D4F1BEBE7AFE4D4D (void);
// 0x00000012 System.Int64 NLayer.MpegFile::get_Length()
extern void MpegFile_get_Length_m1DB3DE1112DDC8A0DA24042E1395E0D74632D280 (void);
// 0x00000013 System.Int64 NLayer.MpegFile::get_Position()
extern void MpegFile_get_Position_m632C29845EC5D6CAE5A27BBF2CDF0DDEB1887A01 (void);
// 0x00000014 System.Int32 NLayer.MpegFile::ReadSamples(System.Single[],System.Int32,System.Int32)
extern void MpegFile_ReadSamples_m72763E3B496E823A2AB89E5E4A49B28B998CDF72 (void);
// 0x00000015 System.Int32 NLayer.MpegFile::ReadSamplesImpl(System.Array,System.Int32,System.Int32)
extern void MpegFile_ReadSamplesImpl_m4CED8CF9C8F521BDA14269E193016D543AA79194 (void);
// 0x00000016 System.Void NLayer.MpegFrameDecoder::.ctor()
extern void MpegFrameDecoder__ctor_mA1A2537389B45597BECE87A3497F1A0CA408CE2B (void);
// 0x00000017 NLayer.StereoMode NLayer.MpegFrameDecoder::get_StereoMode()
extern void MpegFrameDecoder_get_StereoMode_m738B47057B98A5A01676881D68511DB29A9B974C (void);
// 0x00000018 System.Int32 NLayer.MpegFrameDecoder::DecodeFrame(NLayer.IMpegFrame,System.Single[],System.Int32)
extern void MpegFrameDecoder_DecodeFrame_m4228072FC8FBD5F983FC11BFD12EE894DCF2BD4D (void);
// 0x00000019 System.Int32 NLayer.MpegFrameDecoder::DecodeFrameImpl(NLayer.IMpegFrame,System.Array,System.Int32)
extern void MpegFrameDecoder_DecodeFrameImpl_m25017C3AEE7BD68196DEAD415959D5CF9F3E9581 (void);
// 0x0000001A System.Void NLayer.MpegFrameDecoder::Reset()
extern void MpegFrameDecoder_Reset_m0A9AFF50330B7113F01B2D592C8AEE37FE42DFBB (void);
// 0x0000001B System.Int32 NLayer.Decoder.BitReservoir::GetSlots(NLayer.IMpegFrame)
extern void BitReservoir_GetSlots_m9B63B9B4704DE11F4167AF2BB7E2BF294EE03356 (void);
// 0x0000001C System.Boolean NLayer.Decoder.BitReservoir::AddBits(NLayer.IMpegFrame,System.Int32)
extern void BitReservoir_AddBits_m29F51E71FBBFE1E02C47E9EE75A34A8DC6F74E7C (void);
// 0x0000001D System.Int32 NLayer.Decoder.BitReservoir::GetBits(System.Int32)
extern void BitReservoir_GetBits_m748940BCFC3DCCA8350BFEC58F4D8E88FA531D16 (void);
// 0x0000001E System.Int32 NLayer.Decoder.BitReservoir::Get1Bit()
extern void BitReservoir_Get1Bit_mB748DDFD4CA727BC122784F2435236D18CAEA7CC (void);
// 0x0000001F System.Int32 NLayer.Decoder.BitReservoir::TryPeekBits(System.Int32,System.Int32&)
extern void BitReservoir_TryPeekBits_m7E1054B4BB055C39FA5A1B8CD69706EEEC4643C2 (void);
// 0x00000020 System.Int32 NLayer.Decoder.BitReservoir::get_BitsAvailable()
extern void BitReservoir_get_BitsAvailable_m8737E4ABAC6FFA5BD0EF4A282B02D2157C122702 (void);
// 0x00000021 System.Int64 NLayer.Decoder.BitReservoir::get_BitsRead()
extern void BitReservoir_get_BitsRead_m56E1B36D0D7B58590401F36E18271FD32938B2FE (void);
// 0x00000022 System.Void NLayer.Decoder.BitReservoir::SkipBits(System.Int32)
extern void BitReservoir_SkipBits_m8B4B6A883DEA84911344AAC7640ABEC84E13E1D6 (void);
// 0x00000023 System.Void NLayer.Decoder.BitReservoir::RewindBits(System.Int32)
extern void BitReservoir_RewindBits_m39E1FED76C9C9CB817642B4792C6825E669AE844 (void);
// 0x00000024 System.Void NLayer.Decoder.BitReservoir::Reset()
extern void BitReservoir_Reset_mD08CC186572E0D4489B7A0AB2610F2862DC9F172 (void);
// 0x00000025 System.Void NLayer.Decoder.BitReservoir::.ctor()
extern void BitReservoir__ctor_m8CA1AD0A2EE80EAE0DAEB8F3C92EBDFAA1CF4F06 (void);
// 0x00000026 System.Int32 NLayer.Decoder.FrameBase::get_TotalAllocation()
extern void FrameBase_get_TotalAllocation_m5DAC1E8208623CEB4B33A66BC266B39A1A9DCA2D (void);
// 0x00000027 System.Int64 NLayer.Decoder.FrameBase::get_Offset()
extern void FrameBase_get_Offset_m1416C2AB3CB7362055B71C5F46C0F987C08C2D1D (void);
// 0x00000028 System.Void NLayer.Decoder.FrameBase::set_Offset(System.Int64)
extern void FrameBase_set_Offset_m07FCB8ABDA87F8C58513CF0F0E38D96AE31892C1 (void);
// 0x00000029 System.Int32 NLayer.Decoder.FrameBase::get_Length()
extern void FrameBase_get_Length_m3EED3DA8F243BB537DC0554597FED9345E867AB1 (void);
// 0x0000002A System.Void NLayer.Decoder.FrameBase::set_Length(System.Int32)
extern void FrameBase_set_Length_m189E69257EE3ADBC463FF83F7357E7D755ED2763 (void);
// 0x0000002B System.Void NLayer.Decoder.FrameBase::.ctor()
extern void FrameBase__ctor_m2A7BFA56E82B0AB7F8967DE97F92E97FC1623E6A (void);
// 0x0000002C System.Boolean NLayer.Decoder.FrameBase::Validate(System.Int64,NLayer.Decoder.MpegStreamReader)
extern void FrameBase_Validate_mC7F44A3FD5E0C43F334A97FDB776F5C11B0D08BF (void);
// 0x0000002D System.Int32 NLayer.Decoder.FrameBase::Read(System.Int32,System.Byte[])
extern void FrameBase_Read_m04FE8A00AF355F13998881C4C9ECD2CDB51E7030 (void);
// 0x0000002E System.Int32 NLayer.Decoder.FrameBase::Read(System.Int32,System.Byte[],System.Int32,System.Int32)
extern void FrameBase_Read_mB5459A003506816FAAE9B99AE6E59C6117099441 (void);
// 0x0000002F System.Int32 NLayer.Decoder.FrameBase::ReadByte(System.Int32)
extern void FrameBase_ReadByte_mBF4ADE7633E61D54396195E81C7AA6FA29441526 (void);
// 0x00000030 System.Int32 NLayer.Decoder.FrameBase::Validate()
// 0x00000031 System.Void NLayer.Decoder.FrameBase::SaveBuffer()
extern void FrameBase_SaveBuffer_m7D6096BCA65B37C3F772F8AB1A54BC7DECB791DB (void);
// 0x00000032 System.Void NLayer.Decoder.FrameBase::ClearBuffer()
extern void FrameBase_ClearBuffer_m82606D97BF95B5A46128943330A0B1E873CF874F (void);
// 0x00000033 System.Void NLayer.Decoder.Huffman::.cctor()
extern void Huffman__cctor_mB032747FCDFF4BF99F67E2E873026050924997FE (void);
// 0x00000034 System.Void NLayer.Decoder.Huffman::Decode(NLayer.Decoder.BitReservoir,System.Int32,System.Single&,System.Single&)
extern void Huffman_Decode_m8410271F97842AB703FA087873108388FB1EEFD8 (void);
// 0x00000035 System.Void NLayer.Decoder.Huffman::Decode(NLayer.Decoder.BitReservoir,System.Int32,System.Single&,System.Single&,System.Single&,System.Single&)
extern void Huffman_Decode_m55FA6AFD4050D8F49A7AFDCB82C7BDFB68BB1325 (void);
// 0x00000036 System.Byte NLayer.Decoder.Huffman::DecodeSymbol(NLayer.Decoder.BitReservoir,System.Int32)
extern void Huffman_DecodeSymbol_mDAA3A2713F56990A97D62E8F8588AD271629E4F2 (void);
// 0x00000037 NLayer.Decoder.Huffman/HuffmanListNode NLayer.Decoder.Huffman::GetNode(System.Int32,System.Int32&)
extern void Huffman_GetNode_mE93355EE95184ED15AB10589195A6D649AF0CD8A (void);
// 0x00000038 NLayer.Decoder.Huffman/HuffmanListNode NLayer.Decoder.Huffman::InitTable(System.Byte[0...,0...],System.Int32&)
extern void Huffman_InitTable_mE14FF20DCB5A8081BACC62C57ECC7EF4EFD0CC17 (void);
// 0x00000039 System.Int32 NLayer.Decoder.Huffman::FindPreviousNode(System.Byte[0...,0...],System.Int32,System.Int32&)
extern void Huffman_FindPreviousNode_m9ADC6AB86A55D7C3EE4EBF0FB75A2DA6D69F51F3 (void);
// 0x0000003A NLayer.Decoder.Huffman/HuffmanListNode NLayer.Decoder.Huffman::BuildLinkedList(System.Collections.Generic.List`1<System.Byte>,System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Int32>,System.Int32&)
extern void Huffman_BuildLinkedList_m341FB046C624D7536977EE96F5FA8479093AB0F5 (void);
// 0x0000003B System.Void NLayer.Decoder.Huffman/HuffmanListNode::.ctor()
extern void HuffmanListNode__ctor_mEFAA610BA05E54B6AFDA55758FE0B24D6971BC0E (void);
// 0x0000003C System.Void NLayer.Decoder.Huffman/<>c::.cctor()
extern void U3CU3Ec__cctor_mD900928A2B56B038DF5DFFFF2E80D4C06D1810DB (void);
// 0x0000003D System.Void NLayer.Decoder.Huffman/<>c::.ctor()
extern void U3CU3Ec__ctor_m74A15B7249DDC50FAEC2B9F9C438F37FC4C2B969 (void);
// 0x0000003E System.Int32 NLayer.Decoder.Huffman/<>c::<BuildLinkedList>b__12_0(NLayer.Decoder.Huffman/HuffmanListNode,NLayer.Decoder.Huffman/HuffmanListNode)
extern void U3CU3Ec_U3CBuildLinkedListU3Eb__12_0_mB16EEC90F97A2254ADFEE2D360EE92699FA49608 (void);
// 0x0000003F NLayer.Decoder.ID3Frame NLayer.Decoder.ID3Frame::TrySync(System.UInt32)
extern void ID3Frame_TrySync_mC3CEACFA45A0B580B9B605CF137E87877AC5B219 (void);
// 0x00000040 System.Void NLayer.Decoder.ID3Frame::.ctor()
extern void ID3Frame__ctor_m44369E58A63414BDF94C29C27AA290DEE5842752 (void);
// 0x00000041 System.Int32 NLayer.Decoder.ID3Frame::Validate()
extern void ID3Frame_Validate_mFBA65BAF87AE1F347704544A16D0647F85BCCF07 (void);
// 0x00000042 System.Int32 NLayer.Decoder.ID3Frame::get_Version()
extern void ID3Frame_get_Version_m15DD2037D6079DBADBF563AC647518DB5C95B673 (void);
// 0x00000043 System.Void NLayer.Decoder.ID3Frame::Merge(NLayer.Decoder.ID3Frame)
extern void ID3Frame_Merge_mB9613DCB9D67B55A16B68F277D0DB27EAA07BBC8 (void);
// 0x00000044 System.Void NLayer.Decoder.LayerDecoderBase::.ctor()
extern void LayerDecoderBase__ctor_mC9F2FF6C9FF8459A69CFA8A606F666A23B0214CD (void);
// 0x00000045 System.Int32 NLayer.Decoder.LayerDecoderBase::DecodeFrame(NLayer.IMpegFrame,System.Single[],System.Single[])
// 0x00000046 System.Void NLayer.Decoder.LayerDecoderBase::SetEQ(System.Single[])
extern void LayerDecoderBase_SetEQ_m5A613A7A50E614223D644FBF085C033DE421E31F (void);
// 0x00000047 NLayer.StereoMode NLayer.Decoder.LayerDecoderBase::get_StereoMode()
extern void LayerDecoderBase_get_StereoMode_mF6B695D546CFEDAB414CBAACC0CBD6CD8ADFAAD5 (void);
// 0x00000048 System.Void NLayer.Decoder.LayerDecoderBase::set_StereoMode(NLayer.StereoMode)
extern void LayerDecoderBase_set_StereoMode_m6867FE9BFAA76A6609187299703F42F4D7448BC0 (void);
// 0x00000049 System.Void NLayer.Decoder.LayerDecoderBase::ResetForSeek()
extern void LayerDecoderBase_ResetForSeek_m8FD29CE8345509AFE7DFB6F2D16F37F9D637F5C0 (void);
// 0x0000004A System.Void NLayer.Decoder.LayerDecoderBase::InversePolyPhase(System.Int32,System.Single[])
extern void LayerDecoderBase_InversePolyPhase_m67F0FEA81AAD1C2B94D3E7C9E640A44EF81B96BE (void);
// 0x0000004B System.Void NLayer.Decoder.LayerDecoderBase::GetBufAndOffset(System.Int32,System.Single[]&,System.Int32&)
extern void LayerDecoderBase_GetBufAndOffset_mA839CCE97F44E46E7A1FF46E3969E059E5E8E40B (void);
// 0x0000004C System.Void NLayer.Decoder.LayerDecoderBase::DCT32(System.Single[],System.Single[],System.Int32)
extern void LayerDecoderBase_DCT32_m905E0F0525E3F76971560999D488D3FBFA3F7A83 (void);
// 0x0000004D System.Void NLayer.Decoder.LayerDecoderBase::DCT16(System.Single[],System.Single[])
extern void LayerDecoderBase_DCT16_mE105F402C416E5C5DA1EAAD7294795AD51BD0712 (void);
// 0x0000004E System.Void NLayer.Decoder.LayerDecoderBase::DCT8(System.Single[],System.Single[])
extern void LayerDecoderBase_DCT8_m24CEAC02D947CE4541F5E558F4A587382545C8EE (void);
// 0x0000004F System.Void NLayer.Decoder.LayerDecoderBase::BuildUVec(System.Single[],System.Single[],System.Int32)
extern void LayerDecoderBase_BuildUVec_m7032DE48AC9EDFE852DFD8CD7945288BA9F8C8C2 (void);
// 0x00000050 System.Void NLayer.Decoder.LayerDecoderBase::DewindowOutput(System.Single[],System.Single[])
extern void LayerDecoderBase_DewindowOutput_m0DE5647DFB7F910D43153B29F2E9E6C02BB98D50 (void);
// 0x00000051 System.Void NLayer.Decoder.LayerDecoderBase::.cctor()
extern void LayerDecoderBase__cctor_m587765C0574EB7BF7F490E7D86C44EE32707C08D (void);
// 0x00000052 System.Boolean NLayer.Decoder.LayerIDecoder::GetCRC(NLayer.Decoder.MpegFrame,System.UInt32&)
extern void LayerIDecoder_GetCRC_mD5787C78B2E2508A3A4D527837E9235DA3AADFFE (void);
// 0x00000053 System.Void NLayer.Decoder.LayerIDecoder::.ctor()
extern void LayerIDecoder__ctor_mE5B87C301F56BF669CFAD776A358412379DC3EA4 (void);
// 0x00000054 System.Int32[] NLayer.Decoder.LayerIDecoder::GetRateTable(NLayer.IMpegFrame)
extern void LayerIDecoder_GetRateTable_m4070288DBD340165042C7DB3642F353DD541599C (void);
// 0x00000055 System.Void NLayer.Decoder.LayerIDecoder::ReadScaleFactorSelection(NLayer.IMpegFrame,System.Int32[][],System.Int32)
extern void LayerIDecoder_ReadScaleFactorSelection_m85637B118FFBB97D8DEFB8402F8BD5E491EE22E6 (void);
// 0x00000056 System.Void NLayer.Decoder.LayerIDecoder::.cctor()
extern void LayerIDecoder__cctor_mA2D4257474FF93CDE544143DE27B2891991F5B9F (void);
// 0x00000057 System.Boolean NLayer.Decoder.LayerIIDecoder::GetCRC(NLayer.Decoder.MpegFrame,System.UInt32&)
extern void LayerIIDecoder_GetCRC_m762170984CA1842127E5D1F8884C699650330E9F (void);
// 0x00000058 System.Int32[] NLayer.Decoder.LayerIIDecoder::SelectTable(NLayer.IMpegFrame)
extern void LayerIIDecoder_SelectTable_mE819952714670A0D84A60B46FD3DA7FA71517187 (void);
// 0x00000059 System.Void NLayer.Decoder.LayerIIDecoder::.ctor()
extern void LayerIIDecoder__ctor_mE67E9EC92622EA2BAD0D811449EC3B1F6DCE0E28 (void);
// 0x0000005A System.Int32[] NLayer.Decoder.LayerIIDecoder::GetRateTable(NLayer.IMpegFrame)
extern void LayerIIDecoder_GetRateTable_mF2CF5A65E617FACCD43768AA8C3D99A3B7685049 (void);
// 0x0000005B System.Void NLayer.Decoder.LayerIIDecoder::ReadScaleFactorSelection(NLayer.IMpegFrame,System.Int32[][],System.Int32)
extern void LayerIIDecoder_ReadScaleFactorSelection_m57CBF52F5B519E9C1721012C93F67488D76629E1 (void);
// 0x0000005C System.Void NLayer.Decoder.LayerIIDecoder::.cctor()
extern void LayerIIDecoder__cctor_m8E8DEB4EAEDF16191A7B02EB9311DC7B66DADBE5 (void);
// 0x0000005D System.Boolean NLayer.Decoder.LayerIIDecoderBase::GetCRC(NLayer.Decoder.MpegFrame,System.Int32[],System.Int32[][],System.Boolean,System.UInt32&)
extern void LayerIIDecoderBase_GetCRC_mE15FEE91BFE2A70E58A7145FB81FAA914E9DD089 (void);
// 0x0000005E System.Void NLayer.Decoder.LayerIIDecoderBase::.ctor(System.Int32[][],System.Int32)
extern void LayerIIDecoderBase__ctor_m0644151DEA73611299E7CD8E5D9808F1CD72E228 (void);
// 0x0000005F System.Int32 NLayer.Decoder.LayerIIDecoderBase::DecodeFrame(NLayer.IMpegFrame,System.Single[],System.Single[])
extern void LayerIIDecoderBase_DecodeFrame_m2CFF88B29623EE8244633AEAF1D78988CD724693 (void);
// 0x00000060 System.Void NLayer.Decoder.LayerIIDecoderBase::InitFrame(NLayer.IMpegFrame)
extern void LayerIIDecoderBase_InitFrame_mB0F3E862425F423D879A9026E7F2EA03E42A37C2 (void);
// 0x00000061 System.Int32[] NLayer.Decoder.LayerIIDecoderBase::GetRateTable(NLayer.IMpegFrame)
// 0x00000062 System.Void NLayer.Decoder.LayerIIDecoderBase::ReadAllocation(NLayer.IMpegFrame,System.Int32[])
extern void LayerIIDecoderBase_ReadAllocation_mA5307BEF8E82006C37847DAB7B1B95EB1755BD63 (void);
// 0x00000063 System.Void NLayer.Decoder.LayerIIDecoderBase::ReadScaleFactorSelection(NLayer.IMpegFrame,System.Int32[][],System.Int32)
// 0x00000064 System.Void NLayer.Decoder.LayerIIDecoderBase::ReadScaleFactors(NLayer.IMpegFrame)
extern void LayerIIDecoderBase_ReadScaleFactors_m93D7230697031BC6B5D866A35AB1522A0E132EC8 (void);
// 0x00000065 System.Void NLayer.Decoder.LayerIIDecoderBase::ReadSamples(NLayer.IMpegFrame)
extern void LayerIIDecoderBase_ReadSamples_m410BC3A9C460FA798F41455AD2AD19069EC93E8C (void);
// 0x00000066 System.Int32 NLayer.Decoder.LayerIIDecoderBase::DecodeSamples(System.Single[],System.Single[])
extern void LayerIIDecoderBase_DecodeSamples_m11409807D0ED251B54D7285CFAF5B7D8466A1455 (void);
// 0x00000067 System.Void NLayer.Decoder.LayerIIDecoderBase::.cctor()
extern void LayerIIDecoderBase__cctor_m752774D96DAA09449554C6A2E188983FB7FA7EB0 (void);
// 0x00000068 System.Boolean NLayer.Decoder.LayerIIIDecoder::GetCRC(NLayer.Decoder.MpegFrame,System.UInt32&)
extern void LayerIIIDecoder_GetCRC_mB29012EE2FD7D2E1C6ECEAAC55A859027A072AEF (void);
// 0x00000069 System.Void NLayer.Decoder.LayerIIIDecoder::.ctor()
extern void LayerIIIDecoder__ctor_m7404614349211A3F22F7602DF86918838699FCBF (void);
// 0x0000006A System.Int32 NLayer.Decoder.LayerIIIDecoder::DecodeFrame(NLayer.IMpegFrame,System.Single[],System.Single[])
extern void LayerIIIDecoder_DecodeFrame_m15AA331B70AC2A634F8AEDC6964466566A9591CC (void);
// 0x0000006B System.Void NLayer.Decoder.LayerIIIDecoder::ResetForSeek()
extern void LayerIIIDecoder_ResetForSeek_mED5A5B27C5F5A16C8889DEC56B48591BEE47CA89 (void);
// 0x0000006C System.Void NLayer.Decoder.LayerIIIDecoder::ReadSideInfo(NLayer.IMpegFrame)
extern void LayerIIIDecoder_ReadSideInfo_m08ED5ECD2DD5D83A639FA0E3B4A593E9ACB4CDC7 (void);
// 0x0000006D System.Void NLayer.Decoder.LayerIIIDecoder::PrepTables(NLayer.IMpegFrame)
extern void LayerIIIDecoder_PrepTables_mBCFCA71C750456531018E3A8C373AB9F3DEDE2A3 (void);
// 0x0000006E System.Int32 NLayer.Decoder.LayerIIIDecoder::ReadScalefactors(System.Int32,System.Int32)
extern void LayerIIIDecoder_ReadScalefactors_m0A187657A9FBB0F6206F51B249DE22DD738E07F3 (void);
// 0x0000006F System.Int32 NLayer.Decoder.LayerIIIDecoder::ReadLsfScalefactors(System.Int32,System.Int32,System.Int32)
extern void LayerIIIDecoder_ReadLsfScalefactors_mB0AA51F485548A2E884E596E868984E6F1654CA5 (void);
// 0x00000070 System.Void NLayer.Decoder.LayerIIIDecoder::ReadSamples(System.Int32,System.Int32,System.Int32)
extern void LayerIIIDecoder_ReadSamples_m8DC936150F4003F3E3D50CA7716436AC0EAB28AE (void);
// 0x00000071 System.Single NLayer.Decoder.LayerIIIDecoder::Dequantize(System.Int32,System.Single,System.Int32,System.Int32)
extern void LayerIIIDecoder_Dequantize_mAB7D84DD6E6CFEB69566B1B8D02A556485A821AA (void);
// 0x00000072 System.Void NLayer.Decoder.LayerIIIDecoder::Stereo(NLayer.MpegChannelMode,System.Int32,System.Int32,System.Boolean)
extern void LayerIIIDecoder_Stereo_mCBEEB6EAE0F1C3A9147238EA51E067D880DE78D0 (void);
// 0x00000073 System.Void NLayer.Decoder.LayerIIIDecoder::ApplyIStereo(System.Int32,System.Int32,System.Int32)
extern void LayerIIIDecoder_ApplyIStereo_m71CF76B30D4B9715D4A33D8C9C2A52B51B2216F6 (void);
// 0x00000074 System.Void NLayer.Decoder.LayerIIIDecoder::ApplyLsfIStereo(System.Int32,System.Int32,System.Int32,System.Int32)
extern void LayerIIIDecoder_ApplyLsfIStereo_m3EF1E1FCF8FD58F32B42E4688A4C7D0C6F9289B4 (void);
// 0x00000075 System.Void NLayer.Decoder.LayerIIIDecoder::ApplyMidSide(System.Int32,System.Int32)
extern void LayerIIIDecoder_ApplyMidSide_m7652143356F942C76DB18AC321A96335341CAC05 (void);
// 0x00000076 System.Void NLayer.Decoder.LayerIIIDecoder::ApplyFullStereo(System.Int32,System.Int32)
extern void LayerIIIDecoder_ApplyFullStereo_mB3A1B2DEDF1A3C5323A40249A528D8B96C7BB003 (void);
// 0x00000077 System.Void NLayer.Decoder.LayerIIIDecoder::Reorder(System.Single[],System.Boolean)
extern void LayerIIIDecoder_Reorder_mE6A7C0D13797699E23BD3039DDF099CCC778F224 (void);
// 0x00000078 System.Void NLayer.Decoder.LayerIIIDecoder::AntiAlias(System.Single[],System.Boolean)
extern void LayerIIIDecoder_AntiAlias_m01D0D8C8FDD2BBA3E3E8F1D109630EE9ECA6BF3D (void);
// 0x00000079 System.Void NLayer.Decoder.LayerIIIDecoder::FrequencyInversion(System.Single[])
extern void LayerIIIDecoder_FrequencyInversion_m0C5B01A90E28DC3CC92EC52B6A65F578025046F1 (void);
// 0x0000007A System.Void NLayer.Decoder.LayerIIIDecoder::InversePolyphase(System.Single[],System.Int32,System.Int32,System.Single[])
extern void LayerIIIDecoder_InversePolyphase_m87D0E721D42A41E277D2E0AFCAB0BA50006304F1 (void);
// 0x0000007B System.Void NLayer.Decoder.LayerIIIDecoder::.cctor()
extern void LayerIIIDecoder__cctor_mDE6F236A15536855CDB1FBE97D0061F1E1084666 (void);
// 0x0000007C System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::.cctor()
extern void HybridMDCT__cctor_m0953F20DA63FA9D5BE9C584F3F7E53AF24C90265 (void);
// 0x0000007D System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::.ctor()
extern void HybridMDCT__ctor_m7AAE67003919E00F28B3D5F72AA37800FA77FE10 (void);
// 0x0000007E System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::Reset()
extern void HybridMDCT_Reset_mC70FF708F4459257C5EDE176676C35145270748F (void);
// 0x0000007F System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::GetPrevBlock(System.Int32,System.Single[]&,System.Single[]&)
extern void HybridMDCT_GetPrevBlock_m2EC777B2344E8CB339BD47D90EBB4454D30BECC1 (void);
// 0x00000080 System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::Apply(System.Single[],System.Int32,System.Int32,System.Boolean)
extern void HybridMDCT_Apply_mBE84B5B59C6829A28321F620998B9393F5BFD136 (void);
// 0x00000081 System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::LongImpl(System.Single[],System.Int32,System.Int32,System.Single[],System.Int32)
extern void HybridMDCT_LongImpl_mB98ED5597C67EAF9C8716394AD458DACC16EBB81 (void);
// 0x00000082 System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::LongIMDCT(System.Single[],System.Single[])
extern void HybridMDCT_LongIMDCT_mB50703C230C23AB23E980195BF1580A9771E2E72 (void);
// 0x00000083 System.Single NLayer.Decoder.LayerIIIDecoder/HybridMDCT::ICOS72_A(System.Int32)
extern void HybridMDCT_ICOS72_A_mC88D8C421D3B616C42397305AC926916D866351D (void);
// 0x00000084 System.Single NLayer.Decoder.LayerIIIDecoder/HybridMDCT::ICOS36_A(System.Int32)
extern void HybridMDCT_ICOS36_A_mAB6F41FCBC319EA8A3AF69771204EEF54E489A7B (void);
// 0x00000085 System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::imdct_9pt(System.Single[],System.Single[])
extern void HybridMDCT_imdct_9pt_mC63D281CC3F62DD574A561D810717D095A283FA1 (void);
// 0x00000086 System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::ShortImpl(System.Single[],System.Int32,System.Single[])
extern void HybridMDCT_ShortImpl_mED372D93B0CA35BF987341B737AA6C00DCC390DC (void);
// 0x00000087 System.Void NLayer.Decoder.LayerIIIDecoder/HybridMDCT::ShortIMDCT(System.Single[],System.Int32,System.Single[])
extern void HybridMDCT_ShortIMDCT_m625EEDCC47E4194E2DB4043260CC0553B6604577 (void);
// 0x00000088 NLayer.Decoder.MpegFrame NLayer.Decoder.MpegFrame::TrySync(System.UInt32)
extern void MpegFrame_TrySync_mAB45652A11B4D31BCA4AE92A1FD3392673C81AE8 (void);
// 0x00000089 System.Void NLayer.Decoder.MpegFrame::.ctor()
extern void MpegFrame__ctor_mFBB3199CF0662EB95C813B84A49933835764958D (void);
// 0x0000008A System.Int32 NLayer.Decoder.MpegFrame::Validate()
extern void MpegFrame_Validate_mBB40EDD3D6C4CF3D17BB98A71C3160179ABC4FE4 (void);
// 0x0000008B System.Int32 NLayer.Decoder.MpegFrame::GetSideDataSize()
extern void MpegFrame_GetSideDataSize_m19345D068CD9E9BD23CE7A9DAE132FE96F34ED46 (void);
// 0x0000008C System.Boolean NLayer.Decoder.MpegFrame::ValidateCRC()
extern void MpegFrame_ValidateCRC_mB01B65DB133701D8CE918329940156EF9E3AA8F1 (void);
// 0x0000008D System.Void NLayer.Decoder.MpegFrame::UpdateCRC(System.Int32,System.Int32,System.UInt32&)
extern void MpegFrame_UpdateCRC_m55554124E367D0B8AD8326A048C6840324A47DA9 (void);
// 0x0000008E NLayer.Decoder.VBRInfo NLayer.Decoder.MpegFrame::ParseVBR()
extern void MpegFrame_ParseVBR_mE4ADF936664EEA9A80EEEB04F0A4FF70C7F5D4C7 (void);
// 0x0000008F NLayer.Decoder.VBRInfo NLayer.Decoder.MpegFrame::ParseXing(System.Int32)
extern void MpegFrame_ParseXing_mF9B54998474BA6EC54354B83F0EA9AA55C6F6B74 (void);
// 0x00000090 NLayer.Decoder.VBRInfo NLayer.Decoder.MpegFrame::ParseVBRI()
extern void MpegFrame_ParseVBRI_mD0615B9C15CF248F53578D4CD3CF010B1B3530E0 (void);
// 0x00000091 System.Int32 NLayer.Decoder.MpegFrame::get_FrameLength()
extern void MpegFrame_get_FrameLength_mF0075834AE245DF852A0599A08997CB0DD993A06 (void);
// 0x00000092 NLayer.MpegVersion NLayer.Decoder.MpegFrame::get_Version()
extern void MpegFrame_get_Version_mC1CF53BE3B720D82B1C4C3B118FAB9677470FB8C (void);
// 0x00000093 NLayer.MpegLayer NLayer.Decoder.MpegFrame::get_Layer()
extern void MpegFrame_get_Layer_mEAA929BBD91AD22D0C1765C387C9D44DA9216DB8 (void);
// 0x00000094 System.Boolean NLayer.Decoder.MpegFrame::get_HasCrc()
extern void MpegFrame_get_HasCrc_m8AA8A590E9F840ADF6E25E37DB948C7DD0EDB021 (void);
// 0x00000095 System.Int32 NLayer.Decoder.MpegFrame::get_BitRate()
extern void MpegFrame_get_BitRate_mD6E11803446C138D9ED6E0D36C58AACA97637C60 (void);
// 0x00000096 System.Int32 NLayer.Decoder.MpegFrame::get_BitRateIndex()
extern void MpegFrame_get_BitRateIndex_mDC4B18349F59C6511A3166BE34EA7755B0A98AEB (void);
// 0x00000097 System.Int32 NLayer.Decoder.MpegFrame::get_SampleRate()
extern void MpegFrame_get_SampleRate_m79034766173E23CDABBB9748E82DC9C87C1A3C6E (void);
// 0x00000098 System.Int32 NLayer.Decoder.MpegFrame::get_SampleRateIndex()
extern void MpegFrame_get_SampleRateIndex_mB09C4E50B4388BD86619420C5C95E9ACC74D2AD0 (void);
// 0x00000099 System.Int32 NLayer.Decoder.MpegFrame::get_Padding()
extern void MpegFrame_get_Padding_m61B9313FEAACBEC4A8C7E03B8F9E16280677CD8E (void);
// 0x0000009A NLayer.MpegChannelMode NLayer.Decoder.MpegFrame::get_ChannelMode()
extern void MpegFrame_get_ChannelMode_mE8EB33AAF2E8AB8199BE8472C40F9CCEFC214499 (void);
// 0x0000009B System.Int32 NLayer.Decoder.MpegFrame::get_ChannelModeExtension()
extern void MpegFrame_get_ChannelModeExtension_m728F47496DAC299B71F5FBC70B5937727E9B3A3D (void);
// 0x0000009C System.Int32 NLayer.Decoder.MpegFrame::get_Channels()
extern void MpegFrame_get_Channels_mB948443C690344163D37AD66C3E042AB2B48310E (void);
// 0x0000009D System.Int32 NLayer.Decoder.MpegFrame::get_SampleCount()
extern void MpegFrame_get_SampleCount_m5FD444087A472E7B89889A41A0425469D010546D (void);
// 0x0000009E System.Int64 NLayer.Decoder.MpegFrame::get_SampleOffset()
extern void MpegFrame_get_SampleOffset_m5CD1426EC984CEF64895E137FA058B20EEC33743 (void);
// 0x0000009F System.Void NLayer.Decoder.MpegFrame::set_SampleOffset(System.Int64)
extern void MpegFrame_set_SampleOffset_m00BEB1943B6E8E33DED5A22514871E88FB5F2114 (void);
// 0x000000A0 System.Void NLayer.Decoder.MpegFrame::Reset()
extern void MpegFrame_Reset_m92A1124B94EEC2FC2A541E707FD858D6AB241862 (void);
// 0x000000A1 System.Int32 NLayer.Decoder.MpegFrame::ReadBits(System.Int32)
extern void MpegFrame_ReadBits_m35D897C14D10E232EF02122B4EB21FE2D205EBB2 (void);
// 0x000000A2 System.Void NLayer.Decoder.MpegFrame::.cctor()
extern void MpegFrame__cctor_m2870D82C261C95F3C13444850CD7F492B4FA5ACB (void);
// 0x000000A3 System.Void NLayer.Decoder.MpegStreamReader::.ctor(System.IO.Stream)
extern void MpegStreamReader__ctor_m3B7985F593E3CF4FBB036461E58BF66B9B400D59 (void);
// 0x000000A4 NLayer.Decoder.FrameBase NLayer.Decoder.MpegStreamReader::FindNextFrame()
extern void MpegStreamReader_FindNextFrame_mA15D10C7A533B9DB4298E4DE867BE1F5561AED6F (void);
// 0x000000A5 System.Int32 NLayer.Decoder.MpegStreamReader::Read(System.Int64,System.Byte[],System.Int32,System.Int32)
extern void MpegStreamReader_Read_m09EB50AE556C88145E77805C53394023E6895B62 (void);
// 0x000000A6 System.Int32 NLayer.Decoder.MpegStreamReader::ReadByte(System.Int64)
extern void MpegStreamReader_ReadByte_m03F1BBA9B4A85CA35CBAC617CC62C32D6DFCFE11 (void);
// 0x000000A7 System.Void NLayer.Decoder.MpegStreamReader::DiscardThrough(System.Int64,System.Boolean)
extern void MpegStreamReader_DiscardThrough_m68F861B719558353D5068AE5CFACFE125C6B12EE (void);
// 0x000000A8 System.Void NLayer.Decoder.MpegStreamReader::ReadToEnd()
extern void MpegStreamReader_ReadToEnd_m412352FB33FDBA5DA3C6D0CAB225C51F1374C317 (void);
// 0x000000A9 System.Int64 NLayer.Decoder.MpegStreamReader::get_SampleCount()
extern void MpegStreamReader_get_SampleCount_mFFBDC2BE4FC06DEC5A71034C870E4700F005826D (void);
// 0x000000AA System.Int32 NLayer.Decoder.MpegStreamReader::get_SampleRate()
extern void MpegStreamReader_get_SampleRate_mBCA10370A9B35A79C3F3B47F5B02441E154255A1 (void);
// 0x000000AB System.Int32 NLayer.Decoder.MpegStreamReader::get_Channels()
extern void MpegStreamReader_get_Channels_m7EF4728C8E8B6B4F1FE4500C77DF16FB871932F6 (void);
// 0x000000AC NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::NextFrame()
extern void MpegStreamReader_NextFrame_m53E40BF0D995F1C20D61B62ED907DF15CCED4D00 (void);
// 0x000000AD System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::.ctor(System.Int32)
extern void ReadBuffer__ctor_m50DE28F3FA30F7E9CDA440B9AA116655577CD403 (void);
// 0x000000AE System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::Read(NLayer.Decoder.MpegStreamReader,System.Int64,System.Byte[],System.Int32,System.Int32)
extern void ReadBuffer_Read_m45AC96E2A81C7A98375516DB2A458FFE1F32CE2C (void);
// 0x000000AF System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::ReadByte(NLayer.Decoder.MpegStreamReader,System.Int64)
extern void ReadBuffer_ReadByte_mD3685C89511321C61E6D85B4B8F06003A2C18380 (void);
// 0x000000B0 System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
extern void ReadBuffer_EnsureFilled_m70C811145B6FDB4931355062D56440F96B24EFC2 (void);
// 0x000000B1 System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardThrough(System.Int64)
extern void ReadBuffer_DiscardThrough_m3ACB48DA4BF377A4D238B585C82C686CEAAC5989 (void);
// 0x000000B2 System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
extern void ReadBuffer_Truncate_m78ECD26D4377166D382DD90BA4E0A83F5BD37E1D (void);
// 0x000000B3 System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
extern void ReadBuffer_CommitDiscard_m08A31BDDD9B8036AD301B29973C39EF64DC14975 (void);
// 0x000000B4 NLayer.Decoder.RiffHeaderFrame NLayer.Decoder.RiffHeaderFrame::TrySync(System.UInt32)
extern void RiffHeaderFrame_TrySync_m2626FDB1E5878610411E56A232B06342E01342F5 (void);
// 0x000000B5 System.Void NLayer.Decoder.RiffHeaderFrame::.ctor()
extern void RiffHeaderFrame__ctor_m88DAE3E94B1E3C08310929E387DAF8158271640D (void);
// 0x000000B6 System.Int32 NLayer.Decoder.RiffHeaderFrame::Validate()
extern void RiffHeaderFrame_Validate_m7170935DDC6BF752DE49AD7B73B33D545E3D85F0 (void);
// 0x000000B7 System.Void NLayer.Decoder.VBRInfo::.ctor()
extern void VBRInfo__ctor_m633F00AD19CE83CC3386A39C30576D363B4295F6 (void);
// 0x000000B8 System.Int32 NLayer.Decoder.VBRInfo::get_SampleCount()
extern void VBRInfo_get_SampleCount_m6FBD450DF35843E7DFEDD3CD6DA88E2B0988369C (void);
// 0x000000B9 System.Void NLayer.Decoder.VBRInfo::set_SampleCount(System.Int32)
extern void VBRInfo_set_SampleCount_mC0333230406FA13406623061FE76941CA54A0AA7 (void);
// 0x000000BA System.Int32 NLayer.Decoder.VBRInfo::get_SampleRate()
extern void VBRInfo_get_SampleRate_m8692322B90DA74F5EFCFBBB2C4E9DB8EF10CD5A2 (void);
// 0x000000BB System.Void NLayer.Decoder.VBRInfo::set_SampleRate(System.Int32)
extern void VBRInfo_set_SampleRate_mA470F06537EE823CCE6FCFAA3BAFB72FE61BDA8B (void);
// 0x000000BC System.Int32 NLayer.Decoder.VBRInfo::get_Channels()
extern void VBRInfo_get_Channels_mC2D87C44D2A4187BDBBA46F845E636E93D95C7EC (void);
// 0x000000BD System.Void NLayer.Decoder.VBRInfo::set_Channels(System.Int32)
extern void VBRInfo_set_Channels_m7F75EF8520AE22A1B6C3326F57569A1944F21693 (void);
// 0x000000BE System.Int32 NLayer.Decoder.VBRInfo::get_VBRFrames()
extern void VBRInfo_get_VBRFrames_m3FD576F893BE25BB0F6DE425C67F1542ADB4D229 (void);
// 0x000000BF System.Void NLayer.Decoder.VBRInfo::set_VBRFrames(System.Int32)
extern void VBRInfo_set_VBRFrames_mD1E78C9D45E2B59195858BEAA504D09FF5FD6403 (void);
// 0x000000C0 System.Void NLayer.Decoder.VBRInfo::set_VBRBytes(System.Int32)
extern void VBRInfo_set_VBRBytes_mB1A7688382D43305C5D3104069488EC32E80582D (void);
// 0x000000C1 System.Void NLayer.Decoder.VBRInfo::set_VBRQuality(System.Int32)
extern void VBRInfo_set_VBRQuality_m7125F7DED2CBA12C06EE8F7DC7D5C4E7F04041B1 (void);
// 0x000000C2 System.Void NLayer.Decoder.VBRInfo::set_VBRDelay(System.Int32)
extern void VBRInfo_set_VBRDelay_m8AEA617AE0B7E3C2BAAD66034B039CB0BA731FA9 (void);
// 0x000000C3 System.Int64 NLayer.Decoder.VBRInfo::get_VBRStreamSampleCount()
extern void VBRInfo_get_VBRStreamSampleCount_m58426E3F507CDE44EE6E7704CA5439CDE1781146 (void);
static Il2CppMethodPointer s_methodPointers[195] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MpegFile__ctor_m180E271C3E12EC3BF945AE39EEB0BEC396BA2646,
	MpegFile_Init_m75FAB23654C9ABF83A6281361B230AD31BEAF9FC,
	MpegFile_Dispose_mE9F73C4640F275B89E6EF07D5288EC80CF13E930,
	MpegFile_get_SampleCount_m93F7E4D23ADAD6DA2526B97135E397FF75A9B256,
	MpegFile_get_SampleRate_m8887910DE484533EDB050027202328235CFEBB9F,
	MpegFile_get_Channels_mD0105D487810533A23515E43D4F1BEBE7AFE4D4D,
	MpegFile_get_Length_m1DB3DE1112DDC8A0DA24042E1395E0D74632D280,
	MpegFile_get_Position_m632C29845EC5D6CAE5A27BBF2CDF0DDEB1887A01,
	MpegFile_ReadSamples_m72763E3B496E823A2AB89E5E4A49B28B998CDF72,
	MpegFile_ReadSamplesImpl_m4CED8CF9C8F521BDA14269E193016D543AA79194,
	MpegFrameDecoder__ctor_mA1A2537389B45597BECE87A3497F1A0CA408CE2B,
	MpegFrameDecoder_get_StereoMode_m738B47057B98A5A01676881D68511DB29A9B974C,
	MpegFrameDecoder_DecodeFrame_m4228072FC8FBD5F983FC11BFD12EE894DCF2BD4D,
	MpegFrameDecoder_DecodeFrameImpl_m25017C3AEE7BD68196DEAD415959D5CF9F3E9581,
	MpegFrameDecoder_Reset_m0A9AFF50330B7113F01B2D592C8AEE37FE42DFBB,
	BitReservoir_GetSlots_m9B63B9B4704DE11F4167AF2BB7E2BF294EE03356,
	BitReservoir_AddBits_m29F51E71FBBFE1E02C47E9EE75A34A8DC6F74E7C,
	BitReservoir_GetBits_m748940BCFC3DCCA8350BFEC58F4D8E88FA531D16,
	BitReservoir_Get1Bit_mB748DDFD4CA727BC122784F2435236D18CAEA7CC,
	BitReservoir_TryPeekBits_m7E1054B4BB055C39FA5A1B8CD69706EEEC4643C2,
	BitReservoir_get_BitsAvailable_m8737E4ABAC6FFA5BD0EF4A282B02D2157C122702,
	BitReservoir_get_BitsRead_m56E1B36D0D7B58590401F36E18271FD32938B2FE,
	BitReservoir_SkipBits_m8B4B6A883DEA84911344AAC7640ABEC84E13E1D6,
	BitReservoir_RewindBits_m39E1FED76C9C9CB817642B4792C6825E669AE844,
	BitReservoir_Reset_mD08CC186572E0D4489B7A0AB2610F2862DC9F172,
	BitReservoir__ctor_m8CA1AD0A2EE80EAE0DAEB8F3C92EBDFAA1CF4F06,
	FrameBase_get_TotalAllocation_m5DAC1E8208623CEB4B33A66BC266B39A1A9DCA2D,
	FrameBase_get_Offset_m1416C2AB3CB7362055B71C5F46C0F987C08C2D1D,
	FrameBase_set_Offset_m07FCB8ABDA87F8C58513CF0F0E38D96AE31892C1,
	FrameBase_get_Length_m3EED3DA8F243BB537DC0554597FED9345E867AB1,
	FrameBase_set_Length_m189E69257EE3ADBC463FF83F7357E7D755ED2763,
	FrameBase__ctor_m2A7BFA56E82B0AB7F8967DE97F92E97FC1623E6A,
	FrameBase_Validate_mC7F44A3FD5E0C43F334A97FDB776F5C11B0D08BF,
	FrameBase_Read_m04FE8A00AF355F13998881C4C9ECD2CDB51E7030,
	FrameBase_Read_mB5459A003506816FAAE9B99AE6E59C6117099441,
	FrameBase_ReadByte_mBF4ADE7633E61D54396195E81C7AA6FA29441526,
	NULL,
	FrameBase_SaveBuffer_m7D6096BCA65B37C3F772F8AB1A54BC7DECB791DB,
	FrameBase_ClearBuffer_m82606D97BF95B5A46128943330A0B1E873CF874F,
	Huffman__cctor_mB032747FCDFF4BF99F67E2E873026050924997FE,
	Huffman_Decode_m8410271F97842AB703FA087873108388FB1EEFD8,
	Huffman_Decode_m55FA6AFD4050D8F49A7AFDCB82C7BDFB68BB1325,
	Huffman_DecodeSymbol_mDAA3A2713F56990A97D62E8F8588AD271629E4F2,
	Huffman_GetNode_mE93355EE95184ED15AB10589195A6D649AF0CD8A,
	Huffman_InitTable_mE14FF20DCB5A8081BACC62C57ECC7EF4EFD0CC17,
	Huffman_FindPreviousNode_m9ADC6AB86A55D7C3EE4EBF0FB75A2DA6D69F51F3,
	Huffman_BuildLinkedList_m341FB046C624D7536977EE96F5FA8479093AB0F5,
	HuffmanListNode__ctor_mEFAA610BA05E54B6AFDA55758FE0B24D6971BC0E,
	U3CU3Ec__cctor_mD900928A2B56B038DF5DFFFF2E80D4C06D1810DB,
	U3CU3Ec__ctor_m74A15B7249DDC50FAEC2B9F9C438F37FC4C2B969,
	U3CU3Ec_U3CBuildLinkedListU3Eb__12_0_mB16EEC90F97A2254ADFEE2D360EE92699FA49608,
	ID3Frame_TrySync_mC3CEACFA45A0B580B9B605CF137E87877AC5B219,
	ID3Frame__ctor_m44369E58A63414BDF94C29C27AA290DEE5842752,
	ID3Frame_Validate_mFBA65BAF87AE1F347704544A16D0647F85BCCF07,
	ID3Frame_get_Version_m15DD2037D6079DBADBF563AC647518DB5C95B673,
	ID3Frame_Merge_mB9613DCB9D67B55A16B68F277D0DB27EAA07BBC8,
	LayerDecoderBase__ctor_mC9F2FF6C9FF8459A69CFA8A606F666A23B0214CD,
	NULL,
	LayerDecoderBase_SetEQ_m5A613A7A50E614223D644FBF085C033DE421E31F,
	LayerDecoderBase_get_StereoMode_mF6B695D546CFEDAB414CBAACC0CBD6CD8ADFAAD5,
	LayerDecoderBase_set_StereoMode_m6867FE9BFAA76A6609187299703F42F4D7448BC0,
	LayerDecoderBase_ResetForSeek_m8FD29CE8345509AFE7DFB6F2D16F37F9D637F5C0,
	LayerDecoderBase_InversePolyPhase_m67F0FEA81AAD1C2B94D3E7C9E640A44EF81B96BE,
	LayerDecoderBase_GetBufAndOffset_mA839CCE97F44E46E7A1FF46E3969E059E5E8E40B,
	LayerDecoderBase_DCT32_m905E0F0525E3F76971560999D488D3FBFA3F7A83,
	LayerDecoderBase_DCT16_mE105F402C416E5C5DA1EAAD7294795AD51BD0712,
	LayerDecoderBase_DCT8_m24CEAC02D947CE4541F5E558F4A587382545C8EE,
	LayerDecoderBase_BuildUVec_m7032DE48AC9EDFE852DFD8CD7945288BA9F8C8C2,
	LayerDecoderBase_DewindowOutput_m0DE5647DFB7F910D43153B29F2E9E6C02BB98D50,
	LayerDecoderBase__cctor_m587765C0574EB7BF7F490E7D86C44EE32707C08D,
	LayerIDecoder_GetCRC_mD5787C78B2E2508A3A4D527837E9235DA3AADFFE,
	LayerIDecoder__ctor_mE5B87C301F56BF669CFAD776A358412379DC3EA4,
	LayerIDecoder_GetRateTable_m4070288DBD340165042C7DB3642F353DD541599C,
	LayerIDecoder_ReadScaleFactorSelection_m85637B118FFBB97D8DEFB8402F8BD5E491EE22E6,
	LayerIDecoder__cctor_mA2D4257474FF93CDE544143DE27B2891991F5B9F,
	LayerIIDecoder_GetCRC_m762170984CA1842127E5D1F8884C699650330E9F,
	LayerIIDecoder_SelectTable_mE819952714670A0D84A60B46FD3DA7FA71517187,
	LayerIIDecoder__ctor_mE67E9EC92622EA2BAD0D811449EC3B1F6DCE0E28,
	LayerIIDecoder_GetRateTable_mF2CF5A65E617FACCD43768AA8C3D99A3B7685049,
	LayerIIDecoder_ReadScaleFactorSelection_m57CBF52F5B519E9C1721012C93F67488D76629E1,
	LayerIIDecoder__cctor_m8E8DEB4EAEDF16191A7B02EB9311DC7B66DADBE5,
	LayerIIDecoderBase_GetCRC_mE15FEE91BFE2A70E58A7145FB81FAA914E9DD089,
	LayerIIDecoderBase__ctor_m0644151DEA73611299E7CD8E5D9808F1CD72E228,
	LayerIIDecoderBase_DecodeFrame_m2CFF88B29623EE8244633AEAF1D78988CD724693,
	LayerIIDecoderBase_InitFrame_mB0F3E862425F423D879A9026E7F2EA03E42A37C2,
	NULL,
	LayerIIDecoderBase_ReadAllocation_mA5307BEF8E82006C37847DAB7B1B95EB1755BD63,
	NULL,
	LayerIIDecoderBase_ReadScaleFactors_m93D7230697031BC6B5D866A35AB1522A0E132EC8,
	LayerIIDecoderBase_ReadSamples_m410BC3A9C460FA798F41455AD2AD19069EC93E8C,
	LayerIIDecoderBase_DecodeSamples_m11409807D0ED251B54D7285CFAF5B7D8466A1455,
	LayerIIDecoderBase__cctor_m752774D96DAA09449554C6A2E188983FB7FA7EB0,
	LayerIIIDecoder_GetCRC_mB29012EE2FD7D2E1C6ECEAAC55A859027A072AEF,
	LayerIIIDecoder__ctor_m7404614349211A3F22F7602DF86918838699FCBF,
	LayerIIIDecoder_DecodeFrame_m15AA331B70AC2A634F8AEDC6964466566A9591CC,
	LayerIIIDecoder_ResetForSeek_mED5A5B27C5F5A16C8889DEC56B48591BEE47CA89,
	LayerIIIDecoder_ReadSideInfo_m08ED5ECD2DD5D83A639FA0E3B4A593E9ACB4CDC7,
	LayerIIIDecoder_PrepTables_mBCFCA71C750456531018E3A8C373AB9F3DEDE2A3,
	LayerIIIDecoder_ReadScalefactors_m0A187657A9FBB0F6206F51B249DE22DD738E07F3,
	LayerIIIDecoder_ReadLsfScalefactors_mB0AA51F485548A2E884E596E868984E6F1654CA5,
	LayerIIIDecoder_ReadSamples_m8DC936150F4003F3E3D50CA7716436AC0EAB28AE,
	LayerIIIDecoder_Dequantize_mAB7D84DD6E6CFEB69566B1B8D02A556485A821AA,
	LayerIIIDecoder_Stereo_mCBEEB6EAE0F1C3A9147238EA51E067D880DE78D0,
	LayerIIIDecoder_ApplyIStereo_m71CF76B30D4B9715D4A33D8C9C2A52B51B2216F6,
	LayerIIIDecoder_ApplyLsfIStereo_m3EF1E1FCF8FD58F32B42E4688A4C7D0C6F9289B4,
	LayerIIIDecoder_ApplyMidSide_m7652143356F942C76DB18AC321A96335341CAC05,
	LayerIIIDecoder_ApplyFullStereo_mB3A1B2DEDF1A3C5323A40249A528D8B96C7BB003,
	LayerIIIDecoder_Reorder_mE6A7C0D13797699E23BD3039DDF099CCC778F224,
	LayerIIIDecoder_AntiAlias_m01D0D8C8FDD2BBA3E3E8F1D109630EE9ECA6BF3D,
	LayerIIIDecoder_FrequencyInversion_m0C5B01A90E28DC3CC92EC52B6A65F578025046F1,
	LayerIIIDecoder_InversePolyphase_m87D0E721D42A41E277D2E0AFCAB0BA50006304F1,
	LayerIIIDecoder__cctor_mDE6F236A15536855CDB1FBE97D0061F1E1084666,
	HybridMDCT__cctor_m0953F20DA63FA9D5BE9C584F3F7E53AF24C90265,
	HybridMDCT__ctor_m7AAE67003919E00F28B3D5F72AA37800FA77FE10,
	HybridMDCT_Reset_mC70FF708F4459257C5EDE176676C35145270748F,
	HybridMDCT_GetPrevBlock_m2EC777B2344E8CB339BD47D90EBB4454D30BECC1,
	HybridMDCT_Apply_mBE84B5B59C6829A28321F620998B9393F5BFD136,
	HybridMDCT_LongImpl_mB98ED5597C67EAF9C8716394AD458DACC16EBB81,
	HybridMDCT_LongIMDCT_mB50703C230C23AB23E980195BF1580A9771E2E72,
	HybridMDCT_ICOS72_A_mC88D8C421D3B616C42397305AC926916D866351D,
	HybridMDCT_ICOS36_A_mAB6F41FCBC319EA8A3AF69771204EEF54E489A7B,
	HybridMDCT_imdct_9pt_mC63D281CC3F62DD574A561D810717D095A283FA1,
	HybridMDCT_ShortImpl_mED372D93B0CA35BF987341B737AA6C00DCC390DC,
	HybridMDCT_ShortIMDCT_m625EEDCC47E4194E2DB4043260CC0553B6604577,
	MpegFrame_TrySync_mAB45652A11B4D31BCA4AE92A1FD3392673C81AE8,
	MpegFrame__ctor_mFBB3199CF0662EB95C813B84A49933835764958D,
	MpegFrame_Validate_mBB40EDD3D6C4CF3D17BB98A71C3160179ABC4FE4,
	MpegFrame_GetSideDataSize_m19345D068CD9E9BD23CE7A9DAE132FE96F34ED46,
	MpegFrame_ValidateCRC_mB01B65DB133701D8CE918329940156EF9E3AA8F1,
	MpegFrame_UpdateCRC_m55554124E367D0B8AD8326A048C6840324A47DA9,
	MpegFrame_ParseVBR_mE4ADF936664EEA9A80EEEB04F0A4FF70C7F5D4C7,
	MpegFrame_ParseXing_mF9B54998474BA6EC54354B83F0EA9AA55C6F6B74,
	MpegFrame_ParseVBRI_mD0615B9C15CF248F53578D4CD3CF010B1B3530E0,
	MpegFrame_get_FrameLength_mF0075834AE245DF852A0599A08997CB0DD993A06,
	MpegFrame_get_Version_mC1CF53BE3B720D82B1C4C3B118FAB9677470FB8C,
	MpegFrame_get_Layer_mEAA929BBD91AD22D0C1765C387C9D44DA9216DB8,
	MpegFrame_get_HasCrc_m8AA8A590E9F840ADF6E25E37DB948C7DD0EDB021,
	MpegFrame_get_BitRate_mD6E11803446C138D9ED6E0D36C58AACA97637C60,
	MpegFrame_get_BitRateIndex_mDC4B18349F59C6511A3166BE34EA7755B0A98AEB,
	MpegFrame_get_SampleRate_m79034766173E23CDABBB9748E82DC9C87C1A3C6E,
	MpegFrame_get_SampleRateIndex_mB09C4E50B4388BD86619420C5C95E9ACC74D2AD0,
	MpegFrame_get_Padding_m61B9313FEAACBEC4A8C7E03B8F9E16280677CD8E,
	MpegFrame_get_ChannelMode_mE8EB33AAF2E8AB8199BE8472C40F9CCEFC214499,
	MpegFrame_get_ChannelModeExtension_m728F47496DAC299B71F5FBC70B5937727E9B3A3D,
	MpegFrame_get_Channels_mB948443C690344163D37AD66C3E042AB2B48310E,
	MpegFrame_get_SampleCount_m5FD444087A472E7B89889A41A0425469D010546D,
	MpegFrame_get_SampleOffset_m5CD1426EC984CEF64895E137FA058B20EEC33743,
	MpegFrame_set_SampleOffset_m00BEB1943B6E8E33DED5A22514871E88FB5F2114,
	MpegFrame_Reset_m92A1124B94EEC2FC2A541E707FD858D6AB241862,
	MpegFrame_ReadBits_m35D897C14D10E232EF02122B4EB21FE2D205EBB2,
	MpegFrame__cctor_m2870D82C261C95F3C13444850CD7F492B4FA5ACB,
	MpegStreamReader__ctor_m3B7985F593E3CF4FBB036461E58BF66B9B400D59,
	MpegStreamReader_FindNextFrame_mA15D10C7A533B9DB4298E4DE867BE1F5561AED6F,
	MpegStreamReader_Read_m09EB50AE556C88145E77805C53394023E6895B62,
	MpegStreamReader_ReadByte_m03F1BBA9B4A85CA35CBAC617CC62C32D6DFCFE11,
	MpegStreamReader_DiscardThrough_m68F861B719558353D5068AE5CFACFE125C6B12EE,
	MpegStreamReader_ReadToEnd_m412352FB33FDBA5DA3C6D0CAB225C51F1374C317,
	MpegStreamReader_get_SampleCount_mFFBDC2BE4FC06DEC5A71034C870E4700F005826D,
	MpegStreamReader_get_SampleRate_mBCA10370A9B35A79C3F3B47F5B02441E154255A1,
	MpegStreamReader_get_Channels_m7EF4728C8E8B6B4F1FE4500C77DF16FB871932F6,
	MpegStreamReader_NextFrame_m53E40BF0D995F1C20D61B62ED907DF15CCED4D00,
	ReadBuffer__ctor_m50DE28F3FA30F7E9CDA440B9AA116655577CD403,
	ReadBuffer_Read_m45AC96E2A81C7A98375516DB2A458FFE1F32CE2C,
	ReadBuffer_ReadByte_mD3685C89511321C61E6D85B4B8F06003A2C18380,
	ReadBuffer_EnsureFilled_m70C811145B6FDB4931355062D56440F96B24EFC2,
	ReadBuffer_DiscardThrough_m3ACB48DA4BF377A4D238B585C82C686CEAAC5989,
	ReadBuffer_Truncate_m78ECD26D4377166D382DD90BA4E0A83F5BD37E1D,
	ReadBuffer_CommitDiscard_m08A31BDDD9B8036AD301B29973C39EF64DC14975,
	RiffHeaderFrame_TrySync_m2626FDB1E5878610411E56A232B06342E01342F5,
	RiffHeaderFrame__ctor_m88DAE3E94B1E3C08310929E387DAF8158271640D,
	RiffHeaderFrame_Validate_m7170935DDC6BF752DE49AD7B73B33D545E3D85F0,
	VBRInfo__ctor_m633F00AD19CE83CC3386A39C30576D363B4295F6,
	VBRInfo_get_SampleCount_m6FBD450DF35843E7DFEDD3CD6DA88E2B0988369C,
	VBRInfo_set_SampleCount_mC0333230406FA13406623061FE76941CA54A0AA7,
	VBRInfo_get_SampleRate_m8692322B90DA74F5EFCFBBB2C4E9DB8EF10CD5A2,
	VBRInfo_set_SampleRate_mA470F06537EE823CCE6FCFAA3BAFB72FE61BDA8B,
	VBRInfo_get_Channels_mC2D87C44D2A4187BDBBA46F845E636E93D95C7EC,
	VBRInfo_set_Channels_m7F75EF8520AE22A1B6C3326F57569A1944F21693,
	VBRInfo_get_VBRFrames_m3FD576F893BE25BB0F6DE425C67F1542ADB4D229,
	VBRInfo_set_VBRFrames_mD1E78C9D45E2B59195858BEAA504D09FF5FD6403,
	VBRInfo_set_VBRBytes_mB1A7688382D43305C5D3104069488EC32E80582D,
	VBRInfo_set_VBRQuality_m7125F7DED2CBA12C06EE8F7DC7D5C4E7F04041B1,
	VBRInfo_set_VBRDelay_m8AEA617AE0B7E3C2BAAD66034B039CB0BA731FA9,
	VBRInfo_get_VBRStreamSampleCount_m58426E3F507CDE44EE6E7704CA5439CDE1781146,
};
static const int32_t s_InvokerIndices[195] = 
{
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5254,
	5292,
	2979,
	4226,
	2130,
	5292,
	5208,
	5207,
	5207,
	5208,
	5208,
	822,
	822,
	5292,
	5207,
	826,
	826,
	5292,
	6954,
	1593,
	2979,
	5207,
	1326,
	5207,
	5208,
	4209,
	4209,
	5292,
	5292,
	7313,
	5208,
	4210,
	5207,
	4209,
	5292,
	1580,
	1328,
	288,
	2979,
	5207,
	5292,
	5292,
	7344,
	6034,
	5549,
	6661,
	6557,
	6565,
	6119,
	5925,
	5292,
	7344,
	5292,
	1341,
	7017,
	5292,
	5207,
	5207,
	4226,
	5292,
	827,
	4226,
	5207,
	4209,
	5292,
	1986,
	1069,
	1122,
	2126,
	2126,
	1122,
	2126,
	7344,
	6659,
	5292,
	3163,
	1122,
	7344,
	6659,
	7021,
	5292,
	3163,
	1122,
	7344,
	5709,
	2122,
	827,
	4226,
	3163,
	2126,
	1122,
	4226,
	4226,
	1341,
	7344,
	6659,
	5292,
	827,
	5292,
	4226,
	4226,
	1327,
	810,
	1078,
	645,
	687,
	1078,
	684,
	1971,
	1971,
	2130,
	2130,
	4226,
	712,
	7344,
	7344,
	5292,
	5292,
	1069,
	713,
	244,
	6791,
	7088,
	7088,
	6791,
	1113,
	6374,
	7017,
	5292,
	5207,
	5207,
	5254,
	6343,
	5225,
	3160,
	5225,
	5207,
	5207,
	5207,
	5254,
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5207,
	5208,
	4210,
	5292,
	2979,
	7344,
	4226,
	5225,
	289,
	2980,
	2097,
	5292,
	5208,
	5207,
	5207,
	5225,
	4209,
	177,
	1340,
	825,
	4210,
	5292,
	5292,
	7017,
	5292,
	5207,
	5292,
	5207,
	4209,
	5207,
	4209,
	5207,
	4209,
	5207,
	4209,
	4209,
	4209,
	4209,
	5208,
};
extern const CustomAttributesCacheGenerator g_NLayer_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_NLayer_CodeGenModule;
const Il2CppCodeGenModule g_NLayer_CodeGenModule = 
{
	"NLayer.dll",
	195,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_NLayer_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
