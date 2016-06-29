//
//  ImageUploadingView.h
//  MarkLite
//
//  Created by zhubch on 6/29/16.
//  Copyright © 2016 zhubch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageUploadingView : UIVisualEffectView

@property (nonatomic,copy) NSString *title;

@property (nonatomic,copy) NSString *message;

@property (nonatomic,assign) CGFloat percent;

@property (nonatomic,copy) void(^cancelBlock)();

- (instancetype)initWithTitle:(NSString*)title message:(NSString *)message cancelBlock:(void(^)())block;

- (void)show;

@end
