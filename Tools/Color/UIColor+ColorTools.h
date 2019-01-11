//
//  UIColor+ColorTools.h
//  Tools
//
//  Created by 江鸟 on 2019/1/11.
//  Copyright © 2019年 Simetrio. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (ColorTools)

/**
 *  十六进制色值转UIColor,可设置透明度
 *
 *  @param hexValue   16进制色值
 *  @param alphaValue 透明度
 *
 *  @return UIColor
 */
+ (UIColor *)colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;

/**
 *  十六进制色值转UIColor
 *
 *  @param hexValue 16进制色值
 *
 *  @return UIColor
 */
+ (UIColor *)colorWithHex:(NSInteger)hexValue;

/**
 *  UIColor转16进制色值
 *
 *  @param color UIColor
 *
 *  @return 16进制色值
 */
+ (NSString *)hexFromUIColor:(UIColor*)color;

@end

NS_ASSUME_NONNULL_END
