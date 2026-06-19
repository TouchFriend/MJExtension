//
//  MJWomen.m
//  MJExtensionTests
//
//  Created by touchWorld on 2026/6/19.
//  Copyright © 2026 MJ Lee. All rights reserved.
//

#import "MJWomen.h"
#import <MJExtension/MJExtension.h>

// NSSecureCoding实现
MJSecureCodingImplementation(MJWomen, YES)

@implementation MJWomen

+ (NSDictionary *)mj_objectClassInArray {
    return @{@"books": [NSString class],
             @"bags": [MJBag class]};
}

@end
