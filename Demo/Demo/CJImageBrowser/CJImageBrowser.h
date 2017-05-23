//
//  CJImageBrowser.h
//  news
//
//  Created by 北极星电力 on 16/11/6.
//  Copyright © 2016年 北极星电力. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol CJImageBrowserDelegate;
@interface CJImageBrowser : UIViewController <UIScrollViewDelegate>
// 代理
@property (nonatomic, weak) id<CJImageBrowserDelegate> delegate;
// 所有的图片对象
@property (nonatomic, strong) NSArray *photos;
// 当前展示的图片索引
@property (nonatomic, assign) NSUInteger currentPhotoIndex;

// 显示
- (void)show;
@end
@protocol CJImageBrowserDelegate <NSObject>
@optional
// 切换到某一页图片
- (void)photoBrowser:(CJImageBrowser *)photoBrowser didChangedToPageAtIndex:(NSUInteger)index;
@end
