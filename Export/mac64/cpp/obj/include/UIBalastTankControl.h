#ifndef INCLUDED_UIBalastTankControl
#define INCLUDED_UIBalastTankControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UILever.h>
HX_DECLARE_CLASS0(ShipEnd)
HX_DECLARE_CLASS0(UIAction)
HX_DECLARE_CLASS0(UIBalastTankControl)
HX_DECLARE_CLASS0(UIElement)
HX_DECLARE_CLASS0(UILever)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  UIBalastTankControl_obj : public ::UILever_obj{
	public:
		typedef ::UILever_obj super;
		typedef UIBalastTankControl_obj OBJ_;
		UIBalastTankControl_obj();
		Void __construct(::ShipEnd nShipEnd);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIBalastTankControl_obj > __new(::ShipEnd nShipEnd);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIBalastTankControl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIBalastTankControl"); }

		::ShipEnd shipEnd;
		virtual ::UIAction onClick( int mouseX,int mouseY);

		virtual ::ShipEnd getShipEnd( );
		Dynamic getShipEnd_dyn();

};


#endif /* INCLUDED_UIBalastTankControl */ 
