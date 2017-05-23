//
//  UIView+Additon.m
//  SECRET
//
//  Created by J.Cheng on 16/1/22.
//  Copyright © 2016年 J.Cheng. All rights reserved.
//

#import "UIView+Additon.h"

@implementation UIView (Additon)

- (UIViewController *)findeCurrentViewController {
    
    for (UIView *view = self; view; view = view.superview) {
        
        UIResponder *nextResponder = [view nextResponder];
        
        if ([nextResponder isKindOfClass:[UIViewController class]]) {
            
            return (UIViewController *)nextResponder;
            
        }
        
    }
    
    return nil;
}

@end
