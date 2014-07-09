#ifndef INCLUDED_ThrottleControl
#define INCLUDED_ThrottleControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UILever.h>
HX_DECLARE_CLASS0(ThrottleControl)
HX_DECLARE_CLASS0(UIAction)
HX_DECLARE_CLASS0(UIElement)
HX_DECLARE_CLASS0(UILever)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  ThrottleControl_obj : public ::UILever_obj{
	public:
		typedef ::UILever_obj super;
		typedef ThrottleControl_obj OBJ_;
		ThrottleControl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ThrottleControl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThrottleControl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ThrottleControl"); }

		virtual ::UIAction onClick( int mouseX,int mouseY);

};


#endif /* INCLUDED_ThrottleControl */ 
