//
//  UIView+Additon.h
//  SECRET
//
//  Created by J.Cheng on 16/1/22.
//  Copyright © 2016年 J.Cheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Additon)
/**
 *  找到当前的view所在的Controller
 *
 *  @return 返回该Controller
 */
- (UIViewController *)findeCurrentViewController;
@end
