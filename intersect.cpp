bool intersection(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) {
	auto ta = (cx - dx) * (ay - cy) + (cy - dy) * (cx - ax);
	auto tb = (cx - dx) * (by - cy) + (cy - dy) * (cx - bx);
	auto tc = (ax - bx) * (cy - ay) + (ay - by) * (ax - cx);
	auto td = (ax - bx) * (dy - ay) + (ay - by) * (ax - dx);
	return tc * td < 0 && ta * tb < 0;//端点を含む場合は<=
}//もし交わる場合はtrue,交わらない場合はfalse
