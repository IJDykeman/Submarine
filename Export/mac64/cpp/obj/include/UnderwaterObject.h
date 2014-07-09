#ifndef INCLUDED_UnderwaterObject
#define INCLUDED_UnderwaterObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(UnderwaterObject)
HX_DECLARE_CLASS0(Vector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  UnderwaterObject_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef UnderwaterObject_obj OBJ_;
		UnderwaterObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UnderwaterObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnderwaterObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UnderwaterObject"); }

		Float volume;
		Float drag;
		virtual Void update( Float seconds);

		virtual ::Vector getDrag( );
		Dynamic getDrag_dyn();

		virtual ::Vector getBouyancyAndGravityForce( );
		Dynamic getBouyancyAndGravityForce_dyn();

		virtual ::Vector getAllForces( );
		Dynamic getAllForces_dyn();

};


#endif /* INCLUDED_UnderwaterObject */ 
