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
#ifndef INCLUDED_Sailor
#include <Sailor.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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

Void Sailor_obj::__construct()
{
HX_STACK_FRAME("Sailor","new",0x6a635e66,"Sailor.new","Sailor.hx",10,0x8232efca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->targetXLocation = (int)21;
	HX_STACK_LINE(14)
	this->walkSpeed = 2.0;
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->setMass((int)1995406);
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	::openfl::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/standingSailor.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->bitmap = _g1;
	HX_STACK_LINE(24)
	this->bitmap->set_width((int)25);
	HX_STACK_LINE(25)
	this->bitmap->set_height((int)25);
	HX_STACK_LINE(26)
	this->addChild(this->bitmap);
	HX_STACK_LINE(27)
	this->location->x = (int)-21;
	HX_STACK_LINE(28)
	this->location->y = 6.2;
}
;
	return null();
}

//Sailor_obj::~Sailor_obj() { }

Dynamic Sailor_obj::__CreateEmpty() { return  new Sailor_obj; }
hx::ObjectPtr< Sailor_obj > Sailor_obj::__new()
{  hx::ObjectPtr< Sailor_obj > result = new Sailor_obj();
	result->__construct();
	return result;}

Dynamic Sailor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sailor_obj > result = new Sailor_obj();
	result->__construct();
	return result;}

Void Sailor_obj::update( Float seconds){
{
		HX_STACK_FRAME("Sailor","update",0x7099ffc3,"Sailor.update","Sailor.hx",32,0x8232efca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(33)
		this->super::update(seconds);
		HX_STACK_LINE(36)
		if (((this->velocity->x < .00001))){
			HX_STACK_LINE(37)
			this->velocity->x = (int)0;
		}
		HX_STACK_LINE(40)
		Float walk = (this->targetXLocation - this->location->x);		HX_STACK_VAR(walk,"walk");
		HX_STACK_LINE(41)
		Float _g = ::Helpers_obj::clamp(walk,(int)-1,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		walk = _g;
		HX_STACK_LINE(42)
		hx::MultEq(walk,(Float(this->walkSpeed) / Float(::Constants_obj::pixelsPerMeter)));
		HX_STACK_LINE(43)
		hx::AddEq(this->location->x,walk);
		HX_STACK_LINE(45)
		hx::AddEq(this->location->x,this->velocity->x);
		HX_STACK_LINE(46)
		hx::AddEq(this->location->y,this->velocity->y);
	}
return null();
}



Sailor_obj::Sailor_obj()
{
}

Dynamic Sailor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"walkSpeed") ) { return walkSpeed; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"targetXLocation") ) { return targetXLocation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sailor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"walkSpeed") ) { walkSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"targetXLocation") ) { targetXLocation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sailor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("walkSpeed"));
	outFields->push(HX_CSTRING("targetXLocation"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Sailor_obj,walkSpeed),HX_CSTRING("walkSpeed")},
	{hx::fsFloat,(int)offsetof(Sailor_obj,targetXLocation),HX_CSTRING("targetXLocation")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("walkSpeed"),
	HX_CSTRING("targetXLocation"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sailor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sailor_obj::__mClass,"__mClass");
};

#endif

Class Sailor_obj::__mClass;

void Sailor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Sailor"), hx::TCanCast< Sailor_obj> ,sStaticFields,sMemberFields,
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

void Sailor_obj::__boot()
{
}

