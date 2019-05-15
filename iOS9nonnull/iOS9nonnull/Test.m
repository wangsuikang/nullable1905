

//
//  Test.m
//  iOS9nonnull
//
//  Created by 王岁康 on 2019/5/8.
//  Copyright © 2019 王岁康. All rights reserved.
//

#import "Test.h"

@implementation Test

- (void)setName:(NSString *)name {
    if (!name) {
        name = @"";
    }
    _name = name;
}

@end
