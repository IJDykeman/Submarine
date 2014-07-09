#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Constants
#include <Constants.h>
#endif
#ifndef INCLUDED_Flotsam
#include <Flotsam.h>
#endif
#ifndef INCLUDED_Ocean
#include <Ocean.h>
#endif
#ifndef INCLUDED_Submarine
#include <Submarine.h>
#endif
#ifndef INCLUDED_UnderwaterObject
#include <UnderwaterObject.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void World_obj::__construct()
{
HX_STACK_FRAME("World","new",0xe2d1a824,"World.new","World.hx",8,0x7e25a7cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	::Ocean _g = ::Ocean_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->ocean = _g;
	HX_STACK_LINE(12)
	this->addChild(this->ocean);
	HX_STACK_LINE(13)
	::Submarine _g1 = ::Submarine_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(13)
	this->boot = _g1;
	HX_STACK_LINE(14)
	this->addChild(this->boot);
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(18)
		while((true)){
			HX_STACK_LINE(18)
			if ((!(((_g2 < (int)100))))){
				HX_STACK_LINE(18)
				break;
			}
			HX_STACK_LINE(18)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(19)
			::Flotsam _g21 = ::Flotsam_obj::__new(((int)150 * i),(int)600);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(19)
			this->addChild(_g21);
		}
	}
	HX_STACK_LINE(21)
	::haxe::Log_obj::trace(HX_CSTRING("world cons"),hx::SourceInfo(HX_CSTRING("World.hx"),21,HX_CSTRING("World"),HX_CSTRING("new")));
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new()
{  hx::ObjectPtr< World_obj > result = new World_obj();
	result->__construct();
	return result;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > result = new World_obj();
	result->__construct();
	return result;}

Void World_obj::update( ){
{
		HX_STACK_FRAME("World","update",0x2f15e0c5,"World.update","World.hx",24,0x7e25a7cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		Float _g = -(this->get_x());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->ocean->set_x(_g);
		HX_STACK_LINE(26)
		this->boot->update(0.0333333333333333329);
		HX_STACK_LINE(27)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		_g1 = hx::TCast< Float >::cast(::Constants_obj::pixelsPerMeter);
		HX_STACK_LINE(27)
		Float _g2 = (-(this->boot->location->x) * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(27)
		Float _g3 = (_g2 + 450.0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(27)
		this->set_x(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,update,(void))


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(boot,"boot");
	HX_MARK_MEMBER_NAME(ocean,"ocean");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(boot,"boot");
	HX_VISIT_MEMBER_NAME(ocean,"ocean");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic World_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"boot") ) { return boot; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ocean") ) { return ocean; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"boot") ) { boot=inValue.Cast< ::Submarine >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ocean") ) { ocean=inValue.Cast< ::Ocean >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("boot"));
	outFields->push(HX_CSTRING("ocean"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Submarine*/ ,(int)offsetof(World_obj,boot),HX_CSTRING("boot")},
	{hx::fsObject /*::Ocean*/ ,(int)offsetof(World_obj,ocean),HX_CSTRING("ocean")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("boot"),
	HX_CSTRING("ocean"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#endif

Class World_obj::__mClass;

void World_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("World"), hx::TCanCast< World_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void World_obj::__boot()
{
}

