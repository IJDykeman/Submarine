#ifndef INCLUDED_SetEnginePowerUIAction
#define INCLUDED_SetEnginePowerUIAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UIAction.h>
HX_DECLARE_CLASS0(SetEnginePowerUIAction)
HX_DECLARE_CLASS0(UIAction)


class HXCPP_CLASS_ATTRIBUTES  SetEnginePowerUIAction_obj : public ::UIAction_obj{
	public:
		typedef ::UIAction_obj super;
		typedef SetEnginePowerUIAction_obj OBJ_;
		SetEnginePowerUIAction_obj();
		Void __construct(Float nPowerNormal);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SetEnginePowerUIAction_obj > __new(Float nPowerNormal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SetEnginePowerUIAction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SetEnginePowerUIAction"); }

		Float powerNormal;
		virtual Float getPowerNormal( );
		Dynamic getPowerNormal_dyn();

};


#endif /* INCLUDED_SetEnginePowerUIAction */ 
