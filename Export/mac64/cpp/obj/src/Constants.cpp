#include <hxcpp.h>

#ifndef INCLUDED_Constants
#include <Constants.h>
#endif

Void Constants_obj::__construct()
{
	return null();
}

//Constants_obj::~Constants_obj() { }

Dynamic Constants_obj::__CreateEmpty() { return  new Constants_obj; }
hx::ObjectPtr< Constants_obj > Constants_obj::__new()
{  hx::ObjectPtr< Constants_obj > result = new Constants_obj();
	result->__construct();
	return result;}

Dynamic Constants_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Constants_obj > result = new Constants_obj();
	result->__construct();
	return result;}

Float Constants_obj::pixelsPerMeter;

Float Constants_obj::densityOf20DegreeWater;

Float Constants_obj::g;

Float Constants_obj::oceanLevel;


Constants_obj::Constants_obj()
{
}

Dynamic Constants_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oceanLevel") ) { return oceanLevel; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pixelsPerMeter") ) { return pixelsPerMeter; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"densityOf20DegreeWater") ) { return densityOf20DegreeWater; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Constants_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"oceanLevel") ) { oceanLevel=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pixelsPerMeter") ) { pixelsPerMeter=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"densityOf20DegreeWater") ) { densityOf20DegreeWater=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Constants_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("pixelsPerMeter"),
	HX_CSTRING("densityOf20DegreeWater"),
	HX_CSTRING("g"),
	HX_CSTRING("oceanLevel"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constants_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Constants_obj::pixelsPerMeter,"pixelsPerMeter");
	HX_MARK_MEMBER_NAME(Constants_obj::densityOf20DegreeWater,"densityOf20DegreeWater");
	HX_MARK_MEMBER_NAME(Constants_obj::g,"g");
	HX_MARK_MEMBER_NAME(Constants_obj::oceanLevel,"oceanLevel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constants_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Constants_obj::pixelsPerMeter,"pixelsPerMeter");
	HX_VISIT_MEMBER_NAME(Constants_obj::densityOf20DegreeWater,"densityOf20DegreeWater");
	HX_VISIT_MEMBER_NAME(Constants_obj::g,"g");
	HX_VISIT_MEMBER_NAME(Constants_obj::oceanLevel,"oceanLevel");
};

#endif

Class Constants_obj::__mClass;

void Constants_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Constants"), hx::TCanCast< Constants_obj> ,sStaticFields,sMemberFields,
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

void Constants_obj::__boot()
{
	pixelsPerMeter= (int)10;
	densityOf20DegreeWater= 999.7026;
	g= 9.81;
	oceanLevel= (int)6;
}

