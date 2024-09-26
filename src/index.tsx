const QuickQrcode = require('./NativeQuickQrcode').default;

export function multiply(a: number, b: number): number {
  return QuickQrcode.multiply(a, b);
}
