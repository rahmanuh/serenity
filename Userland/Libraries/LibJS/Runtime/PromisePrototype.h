/*
 * Copyright (c) 2021, Linus Groh <linusg@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/PrototypeObject.h>

namespace JS {

class PromisePrototype final : public PrototypeObject<PromisePrototype, Promise> {
    JS_PROTOTYPE_OBJECT(PromisePrototype, Promise, Promise);

public:
    virtual ThrowCompletionOr<void> initialize(Realm&) override;
    virtual ~PromisePrototype() override = default;

private:
    PromisePrototype(Realm&);

    JS_DECLARE_NATIVE_FUNCTION(then);
    JS_DECLARE_NATIVE_FUNCTION(catch_);
    JS_DECLARE_NATIVE_FUNCTION(finally);
};

}
