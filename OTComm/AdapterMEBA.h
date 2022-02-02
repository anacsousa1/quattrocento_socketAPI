#pragma once
#include "GenericAdapter.h"
namespace OTComm
{
	namespace MEBA
	{
		///<summary>Generic Adapter for AUX</summary>
		public ref class AdapterAux : public GenericAdapter
		{
		public:
			AdapterAux() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description { String^ get() override { return "Direct connection to Auxiliary Input"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID { String^ get() override { return "Direct connection to Auxiliary Input"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("DirectConnection.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int  MaxNumChannels { unsigned int get() override { return 1; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 1; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 1; }}
			///<summary>gain of adapter</summary>
			///<returns>gain of adapter</returns>
			property unsigned int AdapterGain { unsigned int get() override { return 1; }}
		};
		///<summary>Generic Adapter for Adapter In</summary>
		public ref class AdapterIn : public GenericAdapter
		{
		public:
			AdapterIn() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description { String^ get() override { return "AdapterIn"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID { String^ get() override { return "AdapterIn"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("Default.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int  MaxNumChannels { unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 1; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 1; }}
			///<summary>gain of adapter</summary>
			///<returns>gain of adapter</returns>
			property unsigned int AdapterGain { unsigned int get() override { return 5; }}
		};
		///<summary>Generic Adapter for Adapter In AD1x16SD5</summary>
		public ref class AdapterInAD1x16SD5 : public AdapterIn
		{
		public:
			AdapterInAD1x16SD5() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "16 channels single adapter differential acquisition"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD1x16SD5"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD1x16SD5_B.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 16; }}
		};
		///<summary>Generic Adapter for Adapter In AD1x16SM5</summary>
		public ref class AdapterInAD1x16SM5 : public AdapterIn
		{
		public:
			AdapterInAD1x16SM5() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "16 channels single adapter monopolar acquisition"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD1x16SM5"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD1x16SM5_B.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 16; }}
		};
		///<summary>Generic Adapter for Adapter In AD1x16</summary>
		public ref class AdapterInAD1x16 : public AdapterIn
		{
		public:
			AdapterInAD1x16() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "16 channels single adapter acquisition"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD1x16"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD1x16.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 16; }}
		};
		///<summary>Generic Adapter for Adapter In AD16</summary>
		public ref class AdapterInAD16 : public AdapterIn
		{
		public:
			AdapterInAD16() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "16 channels single adapter acquisition"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD16"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD16.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 16; }}
		};
		///<summary>Generic Adapter for Adapter In AD1x16SDD5</summary>
		public ref class AdapterInAD1x16SDD5 : public AdapterIn
		{
		public:
			AdapterInAD1x16SDD5() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "16 channels single adapter DC removal"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD1x16SDD5"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD1x16SDD5.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 16; }}
		};
		///<summary>Generic Adapter for Adapter In AD2x8SD5</summary>
		public ref class AdapterInAD2x8 : public AdapterIn
		{
		public:
			AdapterInAD2x8() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "8 channels dual adapter"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD2x8"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD2x8.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 8; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 8; }}
		};
		///<summary>Generic Adapter for Adapter In AD4x4SD5</summary>
		public ref class AdapterInAD4x4 : public AdapterIn
		{
		public:
			AdapterInAD4x4() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "4 channels quad adapter"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD4x4"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD4x4.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 4; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 4; }}
		};
		///<summary>Generic Adapter for Adapter In AD8x2JD</summary>
		public ref class AdapterInAD8x2JD : public AdapterIn
		{
		public:
			AdapterInAD8x2JD() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description {String^ get() override { return "16 channels bipolar adapter"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID {String^ get() override { return "AD8x2JD"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("AD8x2JD.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int MaxNumChannels {unsigned int get() override { return 16; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 1; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 1; }}
			///<summary>gain of adapter</summary>
			///<returns>gain of adapter</returns>
			property unsigned int AdapterGain {unsigned int get() override { return 5; }}
		};
	}
}