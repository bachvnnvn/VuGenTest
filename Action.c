/*char *xml_default_namespace =
    "<acme_org xmlns=\"http://www.w3.org/1999/xhtml\">"
        "<employee level=\"manager\">John Smith"
            "<cubicle>227</cubicle>"
        "</employee>"
    "</acme_org>";

Action()
{
    // Extract Employ fragment from xml_default_namespace
    lr_save_string(xml_default_namespace, "XML_Default_Namespace");

    lr_xml_extract("XML={XML_Default_Namespace}",
          "XMLFragmentParam=Result", 
          //"Query=/*[local-name()\='acme_org']/*[local-name()\='employee']",
          "Query=//employee",
          LAST );
    lr_output_message(lr_eval_string("Employee extracted: {Result}"));

    return 0;
}*/
#include "web_api.h"

const int intWaitLimit = 30;
//int intPollInterval, intWaitTime, rc;
int find_cnt, rc;
char buf[64];
char *xml_default_namespace =
"<acme_org xmlns=\"http://www.w3.org/1999/xhtml\">"
        "<employee level=\"manager\">John Smith"
            "<cubicle>227</cubicle>"
        "</employee>"
    "</acme_org>";

Action()
{
	// Extract Employ fragment from xml_default_namespace
    lr_save_string(xml_default_namespace, "XML_Default_Namespace");

    find_cnt = lr_xml_find("XML={XML_Default_Namespace}", 
          "Value=John Smith",
          //"Query=//*[local-name()\='employee']",  
           "Query=//employee",  
          LAST );
    //lr_output_message(lr_eval_string("Employee extracted: {Result}"));

     if (find_cnt >0)
     {
     	lr_output_message(lr_eval_string("Test is Pass"));
     }
     else
     	lr_output_message(lr_eval_string("Test is Fail"));
    return 0;
    
    rc = lr_xml_get_values("XML={XML_Default_Namespace}", 
          "Value=John Smith",
          //"Query=//*[local-name()\='employee']",  
          "Query=//employee",    
          LAST );
    if (rc >0)
     {
     	lr_output_message(lr_eval_string("Test is Pass"));
     }
     else
     	lr_output_message(lr_eval_string("Test is Fail"));
    return 0;
    
}