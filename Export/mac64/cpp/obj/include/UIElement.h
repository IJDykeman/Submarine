#ifndef INCLUDED_UIElement
#define INCLUDED_UIElement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(UIAction)
HX_DECLARE_CLASS0(UIElement)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  UIElement_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef UIElement_obj OBJ_;
		UIElement_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIElement_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIElement_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIElement"); }

		::openfl::display::Bitmap bitmap;
		virtual ::UIAction onClick( int x,int y);
		Dynamic onClick_dyn();

		virtual bool pointIsInRect( Float pX,Float pY,::openfl::geom::Rectangle rect);
		Dynamic pointIsInRect_dyn();

		virtual Void onResize( int nWidth,int nHeight);
		Dynamic onResize_dyn();

};


#endif /* INCLUDED_UIElement */ 
