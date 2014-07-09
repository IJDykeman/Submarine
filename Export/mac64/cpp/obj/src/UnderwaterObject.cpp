#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Constants
#include <Constants.h>
#endif
#ifndef INCLUDED_Helpers
#include <Helpers.h>
#endif
#ifndef INCLUDED_UnderwaterObject
#include <UnderwaterObject.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void UnderwaterObject_obj::__construct()
{
HX_STACK_FRAME("UnderwaterObject","new",0x57f18030,"UnderwaterObject.new","UnderwaterObject.hx",12,0xbef59540)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//UnderwaterObject_obj::~UnderwaterObject_obj() { }

Dynamic UnderwaterObject_obj::__CreateEmpty() { return  new UnderwaterObject_obj; }
hx::ObjectPtr< UnderwaterObject_obj > UnderwaterObject_obj::__new()
{  hx::ObjectPtr< UnderwaterObject_obj > result = new UnderwaterObject_obj();
	result->__construct();
	return result;}

Dynamic UnderwaterObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnderwaterObject_obj > result = new UnderwaterObject_obj();
	result->__construct();
	return result;}

Void UnderwaterObject_obj::update( Float seconds){
{
		HX_STACK_FRAME("UnderwaterObject","update",0x455b9839,"UnderwaterObject.update","UnderwaterObject.hx",17,0xbef59540)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(18)
		this->super::update(seconds);
		HX_STACK_LINE(19)
		::Vector drag = this->getAllForces();		HX_STACK_VAR(drag,"drag");
		HX_STACK_LINE(20)
		Float _g = this->getMass();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		Float _g1 = (Float(drag->x) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(20)
		hx::AddEq(this->velocity->x,_g1);
		HX_STACK_LINE(21)
		Float _g2 = this->getMass();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(21)
		Float _g3 = (Float(drag->y) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(21)
		hx::AddEq(this->velocity->y,_g3);
	}
return null();
}


::Vector UnderwaterObject_obj::getDrag( ){
	HX_STACK_FRAME("UnderwaterObject","getDrag",0xe1ecb37a,"UnderwaterObject.getDrag","UnderwaterObject.hx",25,0xbef59540)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	Float facingAreaOfShip = (int)100;		HX_STACK_VAR(facingAreaOfShip,"facingAreaOfShip");
	HX_STACK_LINE(29)
	Float _g = ::Math_obj::abs((this->velocity->y + .000000000001));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	Float _g1 = (Float(this->velocity->y) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(28)
	Float _g2 = (((((((-0.5 * this->drag) * this->velocity->y) * this->velocity->y) * ::Constants_obj::densityOf20DegreeWater) * facingAreaOfShip) * (int)600) * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	return ::Vector_obj::__new((((((-0.5 * this->drag) * this->velocity->x) * this->velocity->x) * ::Constants_obj::densityOf20DegreeWater) * facingAreaOfShip),_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(UnderwaterObject_obj,getDrag,return )

::Vector UnderwaterObject_obj::getBouyancyAndGravityForce( ){
	HX_STACK_FRAME("UnderwaterObject","getBouyancyAndGravityForce",0x454a89fa,"UnderwaterObject.getBouyancyAndGravityForce","UnderwaterObject.hx",32,0xbef59540)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	Float facingAreaOfShip = 29.76;		HX_STACK_VAR(facingAreaOfShip,"facingAreaOfShip");
	HX_STACK_LINE(34)
	Float _g = this->get_height();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	Float heightInMeters = (Float(_g) / Float(::Constants_obj::pixelsPerMeter));		HX_STACK_VAR(heightInMeters,"heightInMeters");
	HX_STACK_LINE(35)
	Float fractionBelowWater = ::Helpers_obj::clamp((Float((((this->location->y + heightInMeters) - ::Constants_obj::oceanLevel))) / Float(heightInMeters)),(int)0,(int)1);		HX_STACK_VAR(fractionBelowWater,"fractionBelowWater");
	HX_STACK_LINE(40)
	return ::Vector_obj::__new((int)0,((((-(::Constants_obj::g) * this->volume) * fractionBelowWater) * ::Constants_obj::densityOf20DegreeWater) + (this->mass * ::Constants_obj::g)));
}


HX_DEFINE_DYNAMIC_FUNC0(UnderwaterObject_obj,getBouyancyAndGravityForce,return )

::Vector UnderwaterObject_obj::getAllForces( ){
	HX_STACK_FRAME("UnderwaterObject","getAllForces",0x4c76eae3,"UnderwaterObject.getAllForces","UnderwaterObject.hx",43,0xbef59540)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::Vector drag = this->getDrag();		HX_STACK_VAR(drag,"drag");
	HX_STACK_LINE(45)
	::Vector bouyancyAndG = this->getBouyancyAndGravityForce();		HX_STACK_VAR(bouyancyAndG,"bouyancyAndG");
	HX_STACK_LINE(46)
	return ::Vector_obj::__new((drag->x + bouyancyAndG->x),(drag->y + bouyancyAndG->y));
}


HX_DEFINE_DYNAMIC_FUNC0(UnderwaterObject_obj,getAllForces,return )


UnderwaterObject_obj::UnderwaterObject_obj()
{
}

Dynamic UnderwaterObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getDrag") ) { return getDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAllForces") ) { return getAllForces_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getBouyancyAndGravityForce") ) { return getBouyancyAndGravityForce_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UnderwaterObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UnderwaterObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("drag"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UnderwaterObject_obj,volume),HX_CSTRING("volume")},
	{hx::fsFloat,(int)offsetof(UnderwaterObject_obj,drag),HX_CSTRING("drag")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("volume"),
	HX_CSTRING("drag"),
	HX_CSTRING("update"),
	HX_CSTRING("getDrag"),
	HX_CSTRING("getBouyancyAndGravityForce"),
	HX_CSTRING("getAllForces"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnderwaterObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnderwaterObject_obj::__mClass,"__mClass");
};

#endif

Class UnderwaterObject_obj::__mClass;

void UnderwaterObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UnderwaterObject"), hx::TCanCast< UnderwaterObject_obj> ,sStaticFields,sMemberFields,
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

void UnderwaterObject_obj::__boot()
{
}

