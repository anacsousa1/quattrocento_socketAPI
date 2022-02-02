#pragma once
#include "GenericAdapter.h"
namespace OTComm
{
	namespace MuoviPiu
	{

		///<summary>Generic Adapter for AUX</summary>
		public ref class AdapterAux : public GenericAdapter
		{
		protected:
			unsigned int mAcquisitionMode = 0;
			double mScaleFactor = 1;
			String ^  mUnitOfMeasurement = "V";
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
			property unsigned int AcquisitionMode { unsigned int get() { return mAcquisitionMode; } }
			void SetAcquisitionMode(unsigned int val) { mAcquisitionMode = val; }

			//Aux Scale Factor
			property double ScaleFactor { double get() { return mScaleFactor; } }
			property String^ UnitOfMeasurement { String^ get() override { return mUnitOfMeasurement; }}
			void SetScaleFactor(double val) {
				if (val == 0) {
					mScaleFactor = 1;
				}
				else {
					mScaleFactor = val;
				}
			}
			void SetUnitOfMeasurement(String^ val) { if (val != "") mUnitOfMeasurement = val; }

		};

		///<summary>Generic Adapter for AUX</summary>
		public ref class AdapterControl : public GenericAdapter
		{
		protected:
			unsigned int mAcquisitionMode = 0;
		public:
			AdapterControl() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description { String^ get() override { return "AdapterControl"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID { String^ get() override { return "AdapterControl"; }}
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
			property unsigned int AcquisitionMode { unsigned int get() { return mAcquisitionMode; } }
			void SetAcquisitionMode(unsigned int val) { mAcquisitionMode = val; }
		};

		///<summary>Generic Adapter for Adapter In</summary>
		public ref class AdapterMuoviPiu : public GenericAdapter
		{
		public:
			AdapterMuoviPiu() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description { String^ get() override { return "AdapterMuoviPiu"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID { String^ get() override { return "AdapterMuoviPiu"; }}
			///<summary>Image of adapter</summary>
			///<returns>Image of adapter</returns>
			property Bitmap^ Image { Bitmap^ get() override { return Utilities::GetImageFromEmbeddedResource("Default.png", true); }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int  MaxNumChannels { unsigned int get() override { return 64; }}
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

		public ref class AdapterQuaternions : public GenericAdapter
		{
		protected:
			unsigned int mAcquisitionMode = 0;
			double mScaleFactor = 1;
			String ^  mUnitOfMeasurement = "A.U";
		public:
			AdapterQuaternions() {}
			///<summary>Description of adapter</summary>
			///<returns>description of adapter</returns>
			property String^ Description { String^ get() override { return "Adapter to contain 4 quaternion signal"; }}
			///<summary>ID of adapter</summary>
			///<returns>ID of adapter</returns>
			property String^ ID { String^ get() override { return "AdapterQuaternions"; }}
			///<summary>max number of channel available for adapter</summary>
			///<returns>max number of channel available for adapter</returns>
			property unsigned int  MaxNumChannels { unsigned int get() override { return 4; }}
			///<summary>min size sensor available for adapter</summary>
			///<returns>min size sensor available for adapter</returns>
			property unsigned int MinSizeSensor {unsigned int get() override { return 1; }}
			///<summary>max size sensor available for adapter</summary>
			///<returns>max size sensor available for adapter</returns>
			property unsigned int  MaxSizeSensor { unsigned int get() override { return 1; }}
			///<summary>gain of adapter</summary>
			///<returns>gain of adapter</returns>
			property unsigned int AdapterGain { unsigned int get() override { return 1; }}
			property unsigned int AcquisitionMode { unsigned int get() { return mAcquisitionMode; } }
			void SetAcquisitionMode(unsigned int val) { mAcquisitionMode = val; }

			//Aux Scale Factor
			property double ScaleFactor { double get() { return mScaleFactor; } }
			property String^ UnitOfMeasurement { String^ get() override { return mUnitOfMeasurement; }}
			void SetScaleFactor(double val) {
				if (val == 0) {
					mScaleFactor = 1;
				}
				else {
					mScaleFactor = val;
				}
			}
			void SetUnitOfMeasurement(String^ val) { if (val != "") mUnitOfMeasurement = val; }

		};


	}
}