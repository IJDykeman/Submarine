#include <hxcpp.h>

#ifndef INCLUDED_SetBalastTankLevelUIAction
#include <SetBalastTankLevelUIAction.h>
#endif
#ifndef INCLUDED_ShipEnd
#include <ShipEnd.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIActionType
#include <UIActionType.h>
#endif

Void SetBalastTankLevelUIAction_obj::__construct(Float nLevelNormal,::ShipEnd nBowOrStern)
{
HX_STACK_FRAME("SetBalastTankLevelUIAction","new",0x1326b21f,"SetBalastTankLevelUIAction.new","SetBalastTankLevelUIAction.hx",7,0xcc6d3631)
HX_STACK_THIS(this)
HX_STACK_ARG(nLevelNormal,"nLevelNormal")
HX_STACK_ARG(nBowOrStern,"nBowOrStern")
{
	HX_STACK_LINE(8)
	this->type = ::UIActionType_obj::UIActionSetBalastTankLevel;
	HX_STACK_LINE(9)
	this->levelNormal = nLevelNormal;
	HX_STACK_LINE(10)
	this->bowOrStern = nBowOrStern;
}
;
	return null();
}

//SetBalastTankLevelUIAction_obj::~SetBalastTankLevelUIAction_obj() { }

Dynamic SetBalastTankLevelUIAction_obj::__CreateEmpty() { return  new SetBalastTankLevelUIAction_obj; }
hx::ObjectPtr< SetBalastTankLevelUIAction_obj > SetBalastTankLevelUIAction_obj::__new(Float nLevelNormal,::ShipEnd nBowOrStern)
{  hx::ObjectPtr< SetBalastTankLevelUIAction_obj > result = new SetBalastTankLevelUIAction_obj();
	result->__construct(nLevelNormal,nBowOrStern);
	return result;}

Dynamic SetBalastTankLevelUIAction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SetBalastTankLevelUIAction_obj > result = new SetBalastTankLevelUIAction_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float SetBalastTankLevelUIAction_obj::getLevelNormal( ){
	HX_STACK_FRAME("SetBalastTankLevelUIAction","getLevelNormal",0xe6a7d276,"SetBalastTankLevelUIAction.getLevelNormal","SetBalastTankLevelUIAction.hx",14,0xcc6d3631)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	return this->levelNormal;
}


HX_DEFINE_DYNAMIC_FUNC0(SetBalastTankLevelUIAction_obj,getLevelNormal,return )

::ShipEnd SetBalastTankLevelUIAction_obj::getShipEnd( ){
	HX_STACK_FRAME("SetBalastTankLevelUIAction","getShipEnd",0x205153aa,"SetBalastTankLevelUIAction.getShipEnd","SetBalastTankLevelUIAction.hx",18,0xcc6d3631)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return this->bowOrStern;
}


HX_DEFINE_DYNAMIC_FUNC0(SetBalastTankLevelUIAction_obj,getShipEnd,return )


SetBalastTankLevelUIAction_obj::SetBalastTankLevelUIAction_obj()
{
}

void SetBalastTankLevelUIAction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SetBalastTankLevelUIAction);
	HX_MARK_MEMBER_NAME(levelNormal,"levelNormal");
	HX_MARK_MEMBER_NAME(bowOrStern,"bowOrStern");
	::UIAction_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SetBalastTankLevelUIAction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(levelNormal,"levelNormal");
	HX_VISIT_MEMBER_NAME(bowOrStern,"bowOrStern");
	::UIAction_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SetBalastTankLevelUIAction_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bowOrStern") ) { return bowOrStern; }
		if (HX_FIELD_EQ(inName,"getShipEnd") ) { return getShipEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelNormal") ) { return levelNormal; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLevelNormal") ) { return getLevelNormal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SetBalastTankLevelUIAction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bowOrStern") ) { bowOrStern=inValue.Cast< ::ShipEnd >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelNormal") ) { levelNormal=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SetBalastTankLevelUIAction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("levelNormal"));
	outFields->push(HX_CSTRING("bowOrStern"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SetBalastTankLevelUIAction_obj,levelNormal),HX_CSTRING("levelNormal")},
	{hx::fsObject /*::ShipEnd*/ ,(int)offsetof(SetBalastTankLevelUIAction_obj,bowOrStern),HX_CSTRING("bowOrStern")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("levelNormal"),
	HX_CSTRING("bowOrStern"),
	HX_CSTRING("getLevelNormal"),
	HX_CSTRING("getShipEnd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SetBalastTankLevelUIAction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SetBalastTankLevelUIAction_obj::__mClass,"__mClass");
};

#endif

Class SetBalastTankLevelUIAction_obj::__mClass;

void SetBalastTankLevelUIAction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SetBalastTankLevelUIAction"), hx::TCanCast< SetBalastTankLevelUIAction_obj> ,sStaticFields,sMemberFields,
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

void SetBalastTankLevelUIAction_obj::__boot()
{
}

