/*
   Copyright 2014 Boris T. Darchiev (boris.darchiev@gmail.com)

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef XML2VAR_BUILDER_H
#define XML2VAR_BUILDER_H

#include <node_object_wrap.h>
#include <nan.h>
#include "v8_var_policy.h"

namespace nkit
{
  typedef VarBuilder<V8BuilderPolicy> V8VarBuilder;

  class Xml2VarBuilderWrapper: public Nan::ObjectWrap
  {
  public:
    static void Init(v8::Handle<v8::Object> exports);

  private:
    explicit Xml2VarBuilderWrapper(StructXml2VarBuilder<V8VarBuilder>::Ptr builder)
      : builder_(builder)
    {}

    ~Xml2VarBuilderWrapper()
    {}

    static NAN_METHOD(New);
    static NAN_METHOD(Feed);
    static NAN_METHOD(Get);
    static NAN_METHOD(End);

    static Nan::Persistent<v8::Function> constructor;

    StructXml2VarBuilder<V8VarBuilder>::Ptr builder_;
  };

}  // namespace nkit

#endif // XML2VAR_BUILDER_H
