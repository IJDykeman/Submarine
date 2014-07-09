#include <hxcpp.h>

#ifndef INCLUDED_SetEnginePowerUIAction
#include <SetEnginePowerUIAction.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIActionType
#include <UIActionType.h>
#endif

Void SetEnginePowerUIAction_obj::__construct(Float nPowerNormal)
{
HX_STACK_FRAME("SetEnginePowerUIAction","new",0xddcd111d,"SetEnginePowerUIAction.new","SetEnginePowerUIAction.hx",8,0x047040f3)
HX_STACK_THIS(this)
HX_STACK_ARG(nPowerNormal,"nPowerNormal")
{
	HX_STACK_LINE(9)
	this->type = ::UIActionType_obj::UIActionSetEnginePower;
	HX_STACK_LINE(10)
	this->powerNormal = nPowerNormal;
}
;
	return null();
}

//SetEnginePowerUIAction_obj::~SetEnginePowerUIAction_obj() { }

Dynamic SetEnginePowerUIAction_obj::__CreateEmpty() { return  new SetEnginePowerUIAction_obj; }
hx::ObjectPtr< SetEnginePowerUIAction_obj > SetEnginePowerUIAction_obj::__new(Float nPowerNormal)
{  hx::ObjectPtr< SetEnginePowerUIAction_obj > result = new SetEnginePowerUIAction_obj();
	result->__construct(nPowerNormal);
	return result;}

Dynamic SetEnginePowerUIAction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SetEnginePowerUIAction_obj > result = new SetEnginePowerUIAction_obj();
	result->__construct(inArgs[0]);
	return result;}

Float SetEnginePowerUIAction_obj::getPowerNormal( ){
	HX_STACK_FRAME("SetEnginePowerUIAction","getPowerNormal",0x4ac58579,"SetEnginePowerUIAction.getPowerNormal","SetEnginePowerUIAction.hx",15,0x047040f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	return this->powerNormal;
}


HX_DEFINE_DYNAMIC_FUNC0(SetEnginePowerUIAction_obj,getPowerNormal,return )


SetEnginePowerUIAction_obj::SetEnginePowerUIAction_obj()
{
}

Dynamic SetEnginePowerUIAction_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"powerNormal") ) { return powerNormal; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPowerNormal") ) { return getPowerNormal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SetEnginePowerUIAction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"powerNormal") ) { powerNormal=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SetEnginePowerUIAction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("powerNormal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SetEnginePowerUIAction_obj,powerNormal),HX_CSTRING("powerNormal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("powerNormal"),
	HX_CSTRING("getPowerNormal"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SetEnginePowerUIAction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SetEnginePowerUIAction_obj::__mClass,"__mClass");
};

#endif

Class SetEnginePowerUIAction_obj::__mClass;

void SetEnginePowerUIAction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SetEnginePowerUIAction"), hx::TCanCast< SetEnginePowerUIAction_obj> ,sStaticFields,sMemberFields,
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

void SetEnginePowerUIAction_obj::__boot()
{
}

