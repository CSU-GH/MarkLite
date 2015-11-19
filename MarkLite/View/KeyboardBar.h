//
//  KeyboardBar.h
//  MarkLite
//
//  Created by zhubch on 11/10/15.
//  Copyright © 2015 zhubch. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KeyboardBar : UIView
@property (nonatomic,weak) id<UIKeyInput> editView;
@property (nonatomic,weak) UIViewController *vc;
@end
