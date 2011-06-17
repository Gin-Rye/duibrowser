/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSHTMLMetaElement.h"

#include <wtf/GetPtr.h>

#include "HTMLMetaElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLMetaElementTableValues[6] =
{
    { "content", (intptr_t)JSHTMLMetaElement::ContentAttrNum, DontDelete, 0 },
    { "httpEquiv", (intptr_t)JSHTMLMetaElement::HttpEquivAttrNum, DontDelete, 0 },
    { "name", (intptr_t)JSHTMLMetaElement::NameAttrNum, DontDelete, 0 },
    { "scheme", (intptr_t)JSHTMLMetaElement::SchemeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLMetaElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMetaElementTable = { 127, JSHTMLMetaElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLMetaElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMetaElementConstructorTable = { 0, JSHTMLMetaElementConstructorTableValues, 0 };

class JSHTMLMetaElementConstructor : public DOMObject {
public:
    JSHTMLMetaElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLMetaElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLMetaElementConstructor::s_info = { "HTMLMetaElementConstructor", 0, &JSHTMLMetaElementConstructorTable, 0 };

bool JSHTMLMetaElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMetaElementConstructor, DOMObject>(exec, &JSHTMLMetaElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLMetaElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMetaElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMetaElementPrototypeTable = { 0, JSHTMLMetaElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLMetaElementPrototype::s_info = { "HTMLMetaElementPrototype", 0, &JSHTMLMetaElementPrototypeTable, 0 };

JSObject* JSHTMLMetaElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLMetaElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLMetaElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLMetaElement::s_info = { "HTMLMetaElement", &JSHTMLElement::s_info, &JSHTMLMetaElementTable , 0 };

JSHTMLMetaElement::JSHTMLMetaElement(JSObject* prototype, HTMLMetaElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLMetaElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMetaElement, Base>(exec, &JSHTMLMetaElementTable, this, propertyName, slot);
}

JSValue* JSHTMLMetaElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ContentAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        return jsString(exec, imp->content());
    }
    case HttpEquivAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        return jsString(exec, imp->httpEquiv());
    }
    case NameAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        return jsString(exec, imp->name());
    }
    case SchemeAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        return jsString(exec, imp->scheme());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLMetaElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLMetaElement, Base>(exec, propertyName, value, &JSHTMLMetaElementTable, this);
}

void JSHTMLMetaElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ContentAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        imp->setContent(valueToStringWithNullCheck(exec, value));
        break;
    }
    case HttpEquivAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        imp->setHttpEquiv(valueToStringWithNullCheck(exec, value));
        break;
    }
    case NameAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SchemeAttrNum: {
        HTMLMetaElement* imp = static_cast<HTMLMetaElement*>(impl());
        imp->setScheme(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLMetaElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLMetaElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLMetaElementConstructor>(exec, constructorIdentifier);
}


}