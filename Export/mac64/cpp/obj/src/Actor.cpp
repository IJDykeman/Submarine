#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Constants
#include <Constants.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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

Void Actor_obj::__construct()
{
HX_STACK_FRAME("Actor","new",0xa98e6a47,"Actor.new","Actor.hx",13,0x30f9bb09)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	::Vector _g = ::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->location = _g;
	HX_STACK_LINE(16)
	::Vector _g1 = ::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(16)
	this->velocity = _g1;
}
;
	return null();
}

//Actor_obj::~Actor_obj() { }

Dynamic Actor_obj::__CreateEmpty() { return  new Actor_obj; }
hx::ObjectPtr< Actor_obj > Actor_obj::__new()
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct();
	return result;}

Dynamic Actor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct();
	return result;}

Void Actor_obj::update( Float seconds){
{
		HX_STACK_FRAME("Actor","update",0x9860d682,"Actor.update","Actor.hx",20,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(21)
		this->set_x((this->location->x * ::Constants_obj::pixelsPerMeter));
		HX_STACK_LINE(22)
		this->set_y((this->location->y * ::Constants_obj::pixelsPerMeter));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,update,(void))

Float Actor_obj::getMass( ){
	HX_STACK_FRAME("Actor","getMass",0x39640a11,"Actor.getMass","Actor.hx",26,0x30f9bb09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return this->mass;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getMass,return )

Void Actor_obj::setMass( Float nMass){
{
		HX_STACK_FRAME("Actor","setMass",0x2c659b1d,"Actor.setMass","Actor.hx",30,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nMass,"nMass")
		HX_STACK_LINE(30)
		this->mass = nMass;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setMass,(void))


Actor_obj::Actor_obj()
{
}

void Actor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actor);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(location,"location");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Actor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(location,"location");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Actor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getMass") ) { return getMass_dyn(); }
		if (HX_FIELD_EQ(inName,"setMass") ) { return setMass_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"location") ) { return location; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< ::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("location"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Actor_obj,bitmap),HX_CSTRING("bitmap")},
	{hx::fsFloat,(int)offsetof(Actor_obj,mass),HX_CSTRING("mass")},
	{hx::fsObject /*::Vector*/ ,(int)offsetof(Actor_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::Vector*/ ,(int)offsetof(Actor_obj,location),HX_CSTRING("location")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmap"),
	HX_CSTRING("mass"),
	HX_CSTRING("velocity"),
	HX_CSTRING("location"),
	HX_CSTRING("update"),
	HX_CSTRING("getMass"),
	HX_CSTRING("setMass"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#endif

Class Actor_obj::__mClass;

void Actor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Actor"), hx::TCanCast< Actor_obj> ,sStaticFields,sMemberFields,
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

void Actor_obj::__boot()
{
}

