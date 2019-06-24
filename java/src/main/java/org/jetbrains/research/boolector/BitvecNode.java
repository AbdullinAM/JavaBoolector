package org.jetbrains.research.boolector;

public class BitvecNode extends BoolectorNode {

    private static Integer numberBitvec = 0;

    BitvecNode(long ref) {
        super(ref);
    }

    public static BitvecNode var(BitvecSort sort, String name) {
        return new BitvecNode(Native.var(sort.ref, name +"!" + numberBitvec++));
    }

    public static BitvecNode zero(BitvecSort sort) {
        return new BitvecNode(Native.zero(sort.ref));
    }

    public static BitvecNode constBitvec(String bits) {
        return new BitvecNode(Native.constBitvec(bits));
    }

    public static BitvecNode constInt(int value, BitvecSort sort) {
        return new BitvecNode(Native.constInt(value, sort.ref));
    }

    public static BitvecNode constLong(long value,BitvecSort sort) {
        return new BitvecNode(Native.constLong(String.valueOf(value), sort.ref));
    }

    public BitvecNode sext(int width) {
        return new BitvecNode(Native.sext(ref, width));
    }

    public BitvecNode uext(int width) {
        return new BitvecNode(Native.uext(ref, width));
    }

    public BitvecNode slice(int upper, int lower) {
        return new BitvecNode(Native.slice(ref, upper, lower));
    }

    public BitvecNode not() {
        return new BitvecNode(Native.not(ref));
    }

    public BitvecNode add(BitvecNode bvNode) {
        return new BitvecNode(Native.add(ref, bvNode.ref));
    }

    public BitvecNode and(BitvecNode bvNode) {
        return new BitvecNode(Native.and(ref, bvNode.ref));
    }

    public BitvecNode or(BitvecNode bvNode) {
        return new BitvecNode(Native.or(ref, bvNode.ref));
    }

    public BitvecNode xor(BitvecNode bvNode) {
        return new BitvecNode(Native.xor(ref, bvNode.ref));
    }

    public BitvecNode neg() {
        return new BitvecNode(Native.neg(ref));
    }

    public BitvecNode sub(BitvecNode bvNode) {
        return new BitvecNode(Native.sub(ref, bvNode.ref));
    }

    public BitvecNode mul(BitvecNode bvNode) {
        return new BitvecNode(Native.mul(ref, bvNode.ref));
    }

    public BitvecNode sdiv(BitvecNode bvNode) {
        return new BitvecNode(Native.sdiv(ref, bvNode.ref));
    }

    public BitvecNode udiv(BitvecNode bvNode) {
        return new BitvecNode(Native.udiv(ref, bvNode.ref));
    }

    public BitvecNode smod(BitvecNode bvNode) {
        return new BitvecNode(Native.smod(ref, bvNode.ref));
    }

    public BitvecNode urem(BitvecNode bvNode) {
        return new BitvecNode(Native.urem(ref, bvNode.ref));
    }

    public BoolNode sgt(BitvecNode bvNode) {
        return new BoolNode(Native.sgt(ref, bvNode.ref));
    }

    public BoolNode sgte(BitvecNode bvNode) {
        return new BoolNode(Native.sgte(ref, bvNode.ref));
    }

    public BoolNode slt(BitvecNode bvNode) {
        return new BoolNode(Native.slt(ref, bvNode.ref));
    }

    public BoolNode slte(BitvecNode bvNode) {
        return new BoolNode(Native.slte(ref, bvNode.ref));
    }

    public BitvecNode sll(BitvecNode bvNode) {
        return new BitvecNode(Native.sll(ref, bvNode.ref));
    }

    public BitvecNode srl(BitvecNode bvNode) {
        return new BitvecNode(Native.srl(ref, bvNode.ref));
    }

    public BitvecNode sra(BitvecNode bvNode) {
        return new BitvecNode(Native.sra(ref, bvNode.ref));
    }

    public BitvecNode concat(BitvecNode bvNode) {
        return new BitvecNode(Native.concat(ref, bvNode.ref));
    }

    public String getBits() {
        return Native.getBits(ref);
    }

}