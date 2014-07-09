#include <hxcpp.h>

#ifndef INCLUDED_NoUIAction
#include <NoUIAction.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIActionType
#include <UIActionType.h>
#endif

Void NoUIAction_obj::__construct()
{
HX_STACK_FRAME("NoUIAction","new",0x591bc0fd,"NoUIAction.new","NoUIAction.hx",5,0x15102d13)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	this->type = ::UIActionType_obj::UIActionNone;
}
;
	return null();
}

//NoUIAction_obj::~NoUIAction_obj() { }

Dynamic NoUIAction_obj::__CreateEmpty() { return  new NoUIAction_obj; }
hx::ObjectPtr< NoUIAction_obj > NoUIAction_obj::__new()
{  hx::ObjectPtr< NoUIAction_obj > result = new NoUIAction_obj();
	result->__construct();
	return result;}

Dynamic NoUIAction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NoUIAction_obj > result = new NoUIAction_obj();
	result->__construct();
	return result;}


NoUIAction_obj::NoUIAction_obj()
{
}

Dynamic NoUIAction_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic NoUIAction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void NoUIAction_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoUIAction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoUIAction_obj::__mClass,"__mClass");
};

#endif

Class NoUIAction_obj::__mClass;

void NoUIAction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("NoUIAction"), hx::TCanCast< NoUIAction_obj> ,sStaticFields,sMemberFields,
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

void NoUIAction_obj::__boot()
{
}

