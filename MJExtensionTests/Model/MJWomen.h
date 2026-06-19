//
//  MJWomen.h
//  MJExtensionTests
//
//  Created by touchWorld on 2026/6/19.
//  Copyright © 2026 MJ Lee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MJBag.h"

NS_ASSUME_NONNULL_BEGIN

@interface MJWomen : NSObject

@property (nonatomic, copy) NSString *name;
@property (strong, nonatomic) NSArray<NSString *> *books;
@property (nonatomic, strong) NSArray<MJBag *> *bags;


@end

NS_ASSUME_NONNULL_END
