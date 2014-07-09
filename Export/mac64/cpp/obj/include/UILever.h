#ifndef INCLUDED_UILever
#define INCLUDED_UILever

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UIElement.h>
HX_DECLARE_CLASS0(UIAction)
HX_DECLARE_CLASS0(UIElement)
HX_DECLARE_CLASS0(UILever)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  UILever_obj : public ::UIElement_obj{
	public:
		typedef ::UIElement_obj super;
		typedef UILever_obj OBJ_;
		UILever_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UILever_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UILever_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UILever"); }

		::openfl::display::Bitmap handle;
		Float settingNormal;
		virtual ::UIAction onClick( int mouseX,int mouseY);

		virtual Void onResize( int nWidth,int nHeight);

};


#endif /* INCLUDED_UILever */ 
