#pragma once
using namespace System;
namespace TinkerdinModel {
	[Serializable]
	public ref class Report {
	public: 
		property String^ badUser;
		property String^ reporter;
		property String^ Description;
		property char state;

		property int Id;
	}; 
}


