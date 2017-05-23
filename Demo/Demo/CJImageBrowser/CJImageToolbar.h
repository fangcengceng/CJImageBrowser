//
//  CJImageToolbar.h
//  news
//
//  Created by 北极星电力 on 16/11/6.
//  Copyright © 2016年 北极星电力. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CJImageToolbar : UIView
/**
 所有的图片对象
 */
@property (nonatomic, strong) NSArray *photos;
/**
 当前展示的图片索引
 */
@property (nonatomic, assign) NSUInteger currentPhotoIndex;
@end
