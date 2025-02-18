/*
 * Copyright (c) 2023, Tim Flynn <trflynn89@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#import <System/Cocoa.h>

@class LadybirdWebView;
@class Tab;

@interface Inspector : NSWindow

- (instancetype)init:(Tab*)tab;

- (void)inspect;
- (void)inspectHoveredElement;
- (void)reset;

@end
