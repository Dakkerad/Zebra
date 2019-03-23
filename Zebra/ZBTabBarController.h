//
//  ZBTabBarController.h
//  Zebra
//
//  Created by Wilson Styres on 3/15/19.
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBTabBarController : UITabBarController
@property (nonatomic, strong) NSArray *updates;
@property (nonatomic) BOOL hasUpdates;
- (void)performBackgroundRefresh:(BOOL)requested completion:(void (^)(BOOL success))completion;
@end

NS_ASSUME_NONNULL_END
