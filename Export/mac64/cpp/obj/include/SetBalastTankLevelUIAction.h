#ifndef INCLUDED_SetBalastTankLevelUIAction
#define INCLUDED_SetBalastTankLevelUIAction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UIAction.h>
HX_DECLARE_CLASS0(SetBalastTankLevelUIAction)
HX_DECLARE_CLASS0(ShipEnd)
HX_DECLARE_CLASS0(UIAction)


class HXCPP_CLASS_ATTRIBUTES  SetBalastTankLevelUIAction_obj : public ::UIAction_obj{
	public:
		typedef ::UIAction_obj super;
		typedef SetBalastTankLevelUIAction_obj OBJ_;
		SetBalastTankLevelUIAction_obj();
		Void __construct(Float nLevelNormal,::ShipEnd nBowOrStern);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SetBalastTankLevelUIAction_obj > __new(Float nLevelNormal,::ShipEnd nBowOrStern);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SetBalastTankLevelUIAction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SetBalastTankLevelUIAction"); }

		Float levelNormal;
		::ShipEnd bowOrStern;
		virtual Float getLevelNormal( );
		Dynamic getLevelNormal_dyn();

		virtual ::ShipEnd getShipEnd( );
		Dynamic getShipEnd_dyn();

};


#endif /* INCLUDED_SetBalastTankLevelUIAction */ 
