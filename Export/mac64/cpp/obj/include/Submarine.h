#ifndef INCLUDED_Submarine
#define INCLUDED_Submarine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UnderwaterObject.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Sailor)
HX_DECLARE_CLASS0(ShipEnd)
HX_DECLARE_CLASS0(Submarine)
HX_DECLARE_CLASS0(UnderwaterObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Submarine_obj : public ::UnderwaterObject_obj{
	public:
		typedef ::UnderwaterObject_obj super;
		typedef Submarine_obj OBJ_;
		Submarine_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Submarine_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Submarine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Submarine"); }

		Float engineSettingNormal;
		Float enginePower;
		::Sailor sailor;
		Float sternBalastTankLevelNormal;
		Float bowBalastTankLevelNormal;
		virtual Void update( Float seconds);

		virtual Void setEnginePower( Float nPower);
		Dynamic setEnginePower_dyn();

		virtual Void setBalastTankLevelNormal( Float nLevel,::ShipEnd shipEnd);
		Dynamic setBalastTankLevelNormal_dyn();

};


#endif /* INCLUDED_Submarine */ 
