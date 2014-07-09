#ifndef INCLUDED_Flotsam
#define INCLUDED_Flotsam

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <UnderwaterObject.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Flotsam)
HX_DECLARE_CLASS0(UnderwaterObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Flotsam_obj : public ::UnderwaterObject_obj{
	public:
		typedef ::UnderwaterObject_obj super;
		typedef Flotsam_obj OBJ_;
		Flotsam_obj();
		Void __construct(Float nX,Float nY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Flotsam_obj > __new(Float nX,Float nY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Flotsam_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Flotsam"); }

};


#endif /* INCLUDED_Flotsam */ 
