//
//  Test.h
//  iOS9nonnull
//
//  Created by 王岁康 on 2019/5/8.
//  Copyright © 2019 王岁康. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 资料：https://www.cnblogs.com/SoulKai/p/5893647.html
 
 */
@interface Test : NSObject
@property (nonatomic, copy, null_resettable) NSString *name;
@end


