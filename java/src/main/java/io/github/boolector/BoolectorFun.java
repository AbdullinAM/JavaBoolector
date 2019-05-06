package io.github.boolector;

public class BoolectorFun extends BoolectorObject {

    BoolectorFun(long ref) {
        super(ref);
    }

    public void release() {
        Native.releaseNode(ref);
    }

    public static class FuncParam extends BoolectorFun {
        FuncParam(long ref) {
            super(ref);
        }

        public static FuncParam param(BoolectorSort sort, String name) {
            return new FuncParam(Native.param(sort.ref, name));
        }
    }
}
